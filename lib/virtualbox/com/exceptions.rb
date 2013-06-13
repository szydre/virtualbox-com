module VirtualBox
module COM

class ModelNotFoundException < ::Exception; end

class COMException < ::Exception
    attr_accessor :data

    def initialize(data={})
        @data = data
        super("Error in API call to #{data[:function]}: #{data[:code]}")
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

end
end
