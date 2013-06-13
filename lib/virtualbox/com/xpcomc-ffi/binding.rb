module VirtualBox
module COM
module XPCOMC

# The Binding class hold all the FFI infrastructure
class Binding
    extend ::FFI::Library

    attr_reader :object

    def self.init
        # To simplify code, use typedef for type aliasing
        typedef :int,     :boolean
        typedef :pointer, :unicode_string
        Model.constants.each {|c| m = Model.get(c) 
            if    m <= AbstractInterface then typedef :pointer, c
            elsif m <= AbstractEnum      then typedef :uint32,  c
            end
        }
    end


    # Retrieve a Binding class corresponding to the Model
    # This will avoid polluting the model object with implementation data
    def self.get(name)
        Binding.const_get(name, false)
    rescue NameError
        const_set(name, Class.new(Binding)).bind(Model.get(name))
    end


    # Create the binding with the Model class
    # This will also create the internal classes Object and Vtbl
    # representing the FFI::Struct, all the necessary callbacks,
    # a hash of the name/signatures
    def self.bind(model)
        raise "model already bound" if const_defined?(:Object, false)

#        self.init

        # List of functions (name, signature)
        # Defined in the order they appear in the Model definition
        sigs = model.members.inject({}) do |list, spec| 
            list.merge!(spec.signatures) 
        end
        const_set(:Sig, sigs)

        # Register ffi callbacks
        sigs.each {|name, sig| callback(name, sig.to_ffi_callback, :uint) }

        # Object layout
        const_set(:Object, Class.new(::FFI::Struct))
            .layout(:vtbl, :pointer)
        
        # Vtbl layout
        const_set(:Vtbl,   Class.new(::FFI::Struct))
            .layout(*sigs.map {|name,| [name, name] }.flatten)
        
        # IID
        const_set(:IID, model::IID.to_ffi)

        # Model
        const_set(:Model, model)
        self
    end


    # Initializes the interface to the FFI struct with the given pointer. The
    # pointer is used to initialize the Object which is used to initialize
    # the Vtbl itself.
    def initialize(pointer)
        @object = self.class::Object.new(pointer)
        @vtbl   = self.class::Vtbl.new(@object[:vtbl])
    end


    # Calls a function on the vtbl of the FFI struct. This function handles
    # converting the spec to proper arguments and also handles reading out
    # the arguments, dereferencing pointers, setting up objects, etc. so that
    # the return value is filled with nicely formatted Ruby objects.
    #
    # If the vtbl function being called only has one out parameter, then the
    # return value will be that single object. If it has multiple, then it will
    # be an array of objects.
    def call(name, *args)
        unless sig = self.class::Sig[name]
            raise ArgumentError, "unknown function #{name} in Vtbl"
        end
        ffi_args = sig.prepare_args(args)
        result   = @vtbl[name].call(@object, *ffi_args)        
        if (result & 0x8000_0000) != 0
            raise COMException, :vtbl => name, :code => result
        end
        sig.read_values(ffi_args)
    end
end

end
end
end
