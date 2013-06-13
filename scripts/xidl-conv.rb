require 'bundler/setup'
require 'nokogiri'
require 'virtualbox/com/util'

XIDL = Nokogiri::XML(File.new("../VirtualBox.xidl"))
LIB  = XIDL.root.xpath('library')



io = $stdout

io << <<-EOT
#
# This file has been automatically generated from the VirtualBox.xidl
#

EOT

io << "module VirtualBox\n"
io << "module COM\n"
io << "\n"
io << "MODEL_VERSION = \"4.2\"\n"
io << "\n"
io << "module Model\n"
io << "\n"


io << <<-EOT
class NSISupports < AbstractInterface
  iid      "00000000-0000-0000-c000-000000000046"
  function :QueryInterface, :pointer, [ :pointer ], :hide => true
  function :AddRef,  nil, [],                       :hide => true
  function :Release, nil, [],                       :hide => true
end

EOT


def uncamelize(string)
    VirtualBox::COM::Util.uncamelize(string)
end

def cnv_type(name, array=nil, ptr=nil) 
    return ':pointer' if ptr
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
        else ':'+ name.gsub(/^I/, '')
        end
    t = '[' + t + ']' if array
    t
end


# Enumeration
for enum in LIB.xpath('enum')
    io << "class #{enum[:name]} < AbstractEnum\n"
    io << "  iid \"#{enum[:uuid]}\"\n"
    io << "  map({\n"    
    enum.xpath('const').each {|c|
        io << "    :%-40s => %s,\n" % [ uncamelize(c[:name]), c[:value] ] }
    io << "  })\n"
    io << "  setup\n"
    io << "end\n"
    io << "\n"
end

# Interface
for interface in LIB.xpath('interface')
    io << "class #{interface[:name][1..-1]} < AbstractInterface\n"
    io << "  iid      \"#{interface[:uuid]}\"\n"

    case e=interface[:extends]
    when nil
    when '$errorinfo'
    when '$unknown'   then io << "  extends  :NSISupports\n"
    when /^I/         then io << "  extends  :#{e[1..-1]}\n"
    else raise "Unkown extension"
    end


    interface.xpath('attribute').each {|a|
        name = ':' + uncamelize(a[:name])
        type = cnv_type(a[:type], a[:safearray])
        opts = [ ':readonly => true' ] if a[:readonly]
        args = [ name, type ]
        args << opts if opts && !opts.empty?

        io << "  property " << args.join(', ') << "\n"
    }
    interface.xpath('method').each {|m|
        name = ':' + uncamelize(m[:name])
        ret  = if ret = m.xpath("param[@dir = 'return']")[0]
                   cnv_type(ret[:type], ret[:safearray], ret[:mod] == 'ptr')
               else 'nil'
               end
        param = '[' + m.xpath("param[@dir = 'in' or @dir = 'out']").map {|p|
            t = cnv_type(p[:type], p[:safearray], p[:mod] == 'ptr')
            t = '[:out, ' + t + ']' if p[:dir] == 'out'
            t
        }.join(', ') + ']'

        io << "  function " << [name, ret, param].join(', ') << "\n"
    }

    io << "  setup\n"
    io << "end\n"
    io << "\n"
end


io << "end\n"
io << "end\n"
io << "end\n"

io.flush
