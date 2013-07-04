module VirtualBox
module COM

class ModelNotFoundException < ::Exception
end

class COMException < ::Exception
    attr_accessor :data

    def initialize(data={})
        @data = case data
                when Hash    then data
                when String  then { :message => data }
                when Integer then { :code    => data }
                else raise "don't know how to interprete exception parameter"
                end
        super("error in API call: 0x#{data[:code].to_s(16)}")
    end
end

class NotImplementedException      < COMException; end
class ObjectNotFoundException      < COMException; end
class InvalidVMStateException      < COMException; end
class VMErrorException             < COMException; end
class FileErrorException           < COMException; end
class SubsystemException           < COMException; end
class PDMException                 < COMException; end
class InvalidObjectStateException  < COMException; end
class HostErrorException           < COMException; end
class NotSupportedException        < COMException; end
class XMLErrorException            < COMException; end
class InvalidSessionStateException < COMException; end
class ObjectInUseException         < COMException; end
class InvalidArgException          < COMException; end
class NoInterfaceException         < COMException; end


EXCEPTION_MAP = Hash.new(COMException).merge!({
    0x8000_4001 => NotImplementedException,
    0x8000_4002 => NoInterfaceException,
    0x80BB_0001 => ObjectNotFoundException,
    0x80BB_0002 => InvalidVMStateException,
    0x80BB_0003 => VMErrorException,
    0x80BB_0004 => FileErrorException,
    0x80BB_0005 => SubsystemException,
    0x80BB_0006 => PDMException,
    0x80BB_0007 => InvalidObjectStateException,
    0x80BB_0008 => HostErrorException,
    0x80BB_0009 => NotSupportedException,
    0x80BB_000A => XMLErrorException,
    0x80BB_000B => InvalidSessionStateException,
    0x80BB_000C => ObjectInUseException,
    0x8007_0057 => InvalidArgException
}).freeze


end
end
