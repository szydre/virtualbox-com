module VirtualBox
module COM
module XPCOMC

# Implementer is a wrapper for the Binding class.
# Performs lazy initialisation and enhance function call
class Implementer
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


    # Initialize implementation of the COM interface
    def initialize(interface, pointer)
        unless interface.kind_of?(AbstractInterface)
            raise ArgumentError, "only COM interface can be implemented"
        end
        @interface = interface	# For lazy creation of the
        @pointer   = pointer	#  "binding" attribute
    end

    #--[ Required by Model ]-----------------------------------------------

    # Cast to another interface.
    # Will raise NoInterfaceException if not supported
    def cast(interface, pointer)
        iid = Binding.get(interface)::IID
        Model.create(interface, binding.call(:QueryInterface, iid))
    rescue COMException => e
        e.data.merge!(:mode => :cast)
        raise EXCEPTION_MAP[e.data[:code]], e.data
    end

    # Reads a property 
    def read_property(spec)
        binding.call(spec.getter)
    rescue COMException => e
        e.data.merge!(:property => spec.name, :mode => :read)
        raise EXCEPTION_MAP[e.data[:code]], e.data
    end

    # Writes a property
    def write_property(spec, value)
        binding.call(spec.setter, [value])
    rescue COMException => e
        e.data.merge!(:property => spec.name, :mode => :write)
        raise EXCEPTION_MAP[e.data[:code]], e.data
    end

    # Calls a function
    def call_function(spec, *args)
        binding.call(spec.name,   *args)
    rescue COMException => e
        e.data.merge!(:function => spec.name, :mode => :call)
        raise EXCEPTION_MAP[e.data[:code]], e.data
    end


    #----------------------------------------------------------------------

    def object
        binding.object
    end

    #--[ Private ]---------------------------------------------------------
    private

    # Lazy initialisation of the binding attribute
    def binding
        @binding ||= begin
                         name = @interface.class.name.split('::').last
                         Binding.get(name).new(@pointer)
                     end
    end
end

end
end
end
