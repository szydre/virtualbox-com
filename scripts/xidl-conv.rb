require 'bundler/setup'
require 'getoptlong'
require 'nokogiri'
require 'virtualbox/com/util'


# Parse command line
opts = GetoptLong.new(
	[ "--xidl",		GetoptLong::REQUIRED_ARGUMENT ],
	[ "--file",		GetoptLong::REQUIRED_ARGUMENT ],
	[ "--help",		GetoptLong::NO_ARGUMENT ] )

xidl = nil
file = nil

begin
    opts.each do |opt, arg|
	case opt
	when "--xidl" then xidl = arg
	when "--file" then file = arg
        when "--help" then raise
	end
    end
    raise if xidl.nil?
rescue
    $stderr.print <<EOT
usage: xidl-conv.rb: --xidl file [--file output]
    --xidl        VirtualBox XIDL file
    --file        path to generated output
    --help        Show this message.

EOT
    exit 0
end


XIDL    = Nokogiri::XML(File.new(xidl))
LIB     = XIDL.root.xpath('library')
OUT      = file.nil? ? $stdout : File.open(file, 'w')

OUT << <<-EOT
#
# This file has been automatically generated from the VirtualBox.xidl
# NOTE: it is not always loaded.
#

EOT

OUT << "module VirtualBox\n"
OUT << "module COM\n"
OUT << "module Model\n"
OUT << "\n"


OUT << <<-EOT
class NSISupports < AbstractInterface
  iid      "00000000-0000-0000-c000-000000000046"
  function :QueryInterface, PTR, [ PTR ], :hide => true
  function :AddRef,  nil, [],             :hide => true
  function :Release, nil, [],             :hide => true
end

class NSIException < NSISupports
  iid      "f3a8d3b4-c424-4edc-8bf6-8974c983ba78"
  property :message,       WSTRING,        :readonly => true
  property :result,        UINT32,         :readonly => true
  property :name,          WSTRING,        :readonly => true
  property :filename,      WSTRING,        :readonly => true
  property :line_number,   UINT32,         :readonly => true
  property :column_number, UINT32,         :readonly => true
  property :location,      PTR,            :readonly => true
  property :inner,         :NSIException,  :readonly => true
  property :data,          :NSISupports,   :readonly => true
  function :to_string,     nil, [WSTRING]
end

EOT


class String
    def uncamelize
        VirtualBox::COM::Util.uncamelize(self)
    end

    def up1case
        self[0].upcase + self[1..-1]
    end
end

def origin_of(type)
    if    !LIB.xpath("interface[@name = '#{type}']").empty?
        :interface
    elsif !LIB.xpath("enum     [@name = '#{type}']").empty?
        :enum
    end
end

def cnv_type(name, array=nil, ptr=nil) 
    return 'PTR' if ptr
    t = case name
        when 'boolean'            then 'BOOL'
        when 'octet'              then 'OCTET'
        when 'short'              then 'INT16'
        when 'unsigned short'     then 'UINT16'
        when 'long'               then 'INT32'
        when 'long long'          then 'INT64'
        when 'unsigned long'      then 'UINT32'
        when 'unsigned long long' then 'UINT64'
        when 'uuid'               then 'WSTRING'
        when 'wstring'            then 'WSTRING'
        when '$unknown'           then ':NSISupports'
        when '$errorinfo'         then ':NSIException'
        else 
            case origin_of(name)
            when :interface then ':' + name.gsub(/^I/, '')
            when :enum      then ':' + name
            else raise "Unknown type #{name}"
            end
        end
    t = '[' + t + ']' if array
    t
end


# Enumeration
for enum in LIB.xpath('enum')
    OUT << "class #{enum[:name]} < AbstractEnum\n"
    OUT << "  iid \"#{enum[:uuid]}\"\n"
    OUT << "  map({\n"    
    enum.xpath('const').each {|c|
        OUT << "    :%-40s => %s,\n" % [ c[:name].uncamelize, c[:value] ] }
    OUT << "  })\n"
    OUT << "end\n"
    OUT << "\n"
end

# Interface
for interface in LIB.xpath('interface')
    klass = case e=interface[:extends]
            when 'AbstractInterface'
            when '$errorinfo' then 'NSIException'
            when '$unknown'   then 'NSISupports'
            when /^I/         then e[1..-1]
            else raise "Unknown extension"
            end

    OUT << "class #{interface[:name][1..-1]} < #{klass}\n"
    OUT << "  iid      \"#{interface[:uuid]}\"\n"

    interface.xpath('attribute').each {|a|
        name = ':' + a[:name].uncamelize
        type = cnv_type(a[:type], a[:safearray], a[:mod] == 'ptr')
        opts = if a[:readonly] 
               then [ ':readonly => true' ] 
               end
        args = [ name, type ]
        args << opts if opts && !opts.empty?

        OUT << "  property " << args.join(', ') << "\n"
    }
    interface.xpath('method').each {|m|
        name = ':' + m[:name].uncamelize
        ret  = if ret = m.xpath("param[@dir = 'return']")[0]
                   cnv_type(ret[:type], ret[:safearray], ret[:mod] == 'ptr')
               else 'nil'
               end
        param = '[' + m.xpath("param[@dir = 'in' or @dir = 'out']").map {|p|
            t = cnv_type(p[:type], p[:safearray], p[:mod] == 'ptr')
            t = '[:out, ' + t + ']' if p[:dir] == 'out'
            t
        }.join(', ') + ']'

        OUT << "  function " << [name, ret, param].join(', ') << "\n"
    }

    OUT << "end\n"
    OUT << "\n"
end


OUT << "end\n"
OUT << "end\n"
OUT << "end\n"

OUT.flush
