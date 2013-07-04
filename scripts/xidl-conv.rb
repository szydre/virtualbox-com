require 'bundler/setup'
require 'nokogiri'
require_relative 'util'

XIDL = Nokogiri::XML(File.new(File.dirname(__FILE__) + '/VirtualBox.xidl'))
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
  function :QueryInterface, PTR, [ PTR ], :hide => true
  function :AddRef,  nil, [],             :hide => true
  function :Release, nil, [],             :hide => true
  setup
end

class NSIException < AbstractInterface
  iid      "f3a8d3b4-c424-4edc-8bf6-8974c983ba78"
  extends :NSISupports
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
  setup
end


clas NSIEventTarget < AbstractInterface
  iid      "ea99ad5b-cc67-4efb-97c9-2ef620a59f2a"
  extends :NSISupports
  function post_event,     nil, [ PLEvent ]
  function is_on_current_thread, BOOL, []
  setup
end


class NSIEventQueue < AbstractInterface
  iid      "176afb41-00a4-11d3-9f2a-00400553eef0"
  extends  NSIEventTarget;
  function init_event  PLEvent * aEvent, void * owner, PLHandleEventProc handler, PLDestroyEventProc destructor);
  function post_synchronous_event PLEvent * aEvent, void * *aResult);
  function pending_events PRBool *_retval);
  function process_pending_events
  function event_loop
  function event_available PRBool *aResult);
  function get_event PLEvent * *_retval);
  function handle_event PLEvent * aEvent);
  function wait_for_event  PLEvent * *_retval);
  function  PRInt32 (*GetEventQueueSelectFD)(nsIEventQueue *pThis);
  function init  PRBool aNative);
  function init_from_PRThread PRThread * thread, PRBool aNative);
  function init_from_PLQueue  PLEventQueue * aQueue);
  function enter_monitor
  function exit_monitor
  function revoke_events void * owner);
  function get_PLEventQueue  PLEventQueue * *_retval);
  function is_queue_native, BOOL, []
  function stop_accepting_events
  setup
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
    io << "class #{enum[:name]} < AbstractEnum\n"
    io << "  iid \"#{enum[:uuid]}\"\n"
    io << "  map({\n"    
    enum.xpath('const').each {|c|
        io << "    :%-40s => %s,\n" % [ c[:name].uncamelize, c[:value] ] }
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
    when '$errorinfo' then io << "  extends  :NSIException\n"
    when '$unknown'   then io << "  extends  :NSISupports\n"
    when /^I/         then io << "  extends  :#{e[1..-1]}\n"
    else raise "Unknown extension"
    end


    interface.xpath('attribute').each {|a|
        name = ':' + a[:name].uncamelize
        type = cnv_type(a[:type], a[:safearray], a[:mod] == 'ptr')
        opts = [ ':readonly => true' ] if a[:readonly]
        args = [ name, type ]
        args << opts if opts && !opts.empty?

        io << "  property " << args.join(', ') << "\n"
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
