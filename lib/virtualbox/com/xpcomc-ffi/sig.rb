module VirtualBox
module COM
module XPCOMC

# Signatures are a list of type and direction (way: :in, :out)
# The type supported are simple types which resolved to Symbol
# or array of simple types
#
# These types need to be "converted" to be interpreted corretly
# in the contexts of:
#  - callback
#  - writing arguments 
#  - reading arguments
class Sig
    # Store and normalize signatures
    def initialize(sig)
        @sig = sig.map {|item|
            if item.is_a?(Array) && item[0] == :out 
            then [ item[1], :out ]
            else [ item,    :in  ]
            end
        }.freeze.each{|type, way|
            # Sanity check: only `[type]` or `type`
            if type.is_a?(Array) && type.length != 1
                raise ArgumentError,  "only arrays of simple type are supported"
            end
        }
    end



    # Converts a function signature to an FFI function spec. 
    # This handles custom types (unicode strings, arrays, and
    # out-parameters) and will return a perfectly valid array 
    # ready to be passed into `callback`.
    def to_ffi_callback
        @sig.map {|type, way| is_array = type.is_a?(Array)
            case way
            when :out then is_array ? [:pointer, :pointer] : :pointer
            when :in  then is_array ? [:uint32,  :pointer] : mangling(type)[0]
            end
        }.unshift(:pointer).flatten	# Add `this` element
    end


    # Prepare arguments by converting them to C structures
    def prepare_args(args=[])
        args = args.dup

        results = @sig.inject([]) do |results, item|
            single_type_to_arg(args, item, results)
        end
    end


    # Takes arguments list and returns the output from
    # a function, properly dereferencing any output pointers.
    def read_values(args)
        values, i = [], 0
        @sig.each do |type, way|
            # Array of type: [ type ] 
            # Skip 2: size + pointer to array
            if type.is_a?(Array)
                if way == :out
                    size, type = args[i].read_uint32, type[0]
                    values << if type == OCTET
                              then read_binary_blob(args[i+1], size)
                              else get_array_by_type(args[i+1], type, size)
                              end
                end
                i += 2  

            # Simple type  : type
            # Skip 1: pointer
            else
                if way == :out
                    values << read_by_type(args[i], type)
                end
                i += 1
            end
        end
        
        case values.size when 0 then nil
                         when 1 then values.first
                         else        values
        end
    end



    #--[ Private ]---------------------------------------------------------
    private

    def mangling(type)
        if    type == WSTRING                     then [ :pointer, type       ]
        elsif type == BOOL                        then [ :int,     type       ]
        elsif model = Model.fetch(type)
            if    model <= COM::AbstractInterface then [ :pointer, :interface ]
            elsif model <= COM::AbstractEnum      then [ :uint32,  :enum      ]
            end
        else                                           [ type,     type       ]
        end
    end




    def pointer_for_type(type)
        c_type, = mangling(type)
        ::FFI::MemoryPointer.new(c_type)
    end



    # Converts a single type and args list to the proper formal args list
    def single_type_to_arg(args, item, results)
        type, way = item

        case way
        when :out
            if type.is_a?(Array)
                # For arrays we need two pointers: one for size, and
                # one for the actual array
                results << pointer_for_type(UINT32)
                results << if type[0] == OCTET
                           then pointer_for_type(:pointer)
                           else pointer_for_type(type[0])
                           end
            else
                results << pointer_for_type(type)
            end
        when :in
            if type.is_a?(Array)
            # Array argument
                data = args.shift
                
                # First add the length of the array
                results << data.length
                
                # Create the array
                c_type, i_type = mangling(type.first)
                
                # If its a regular type (int, bool, etc.) then just make it an
                # array of that
                if i_type != :interface
                    # Build a pointer to an array of values
                    result = ::FFI::MemoryPointer.new(c_type, data.length)
                    adder = result.method("put_#{c_type}")
                    data.each_with_index do |single, index|
                        value = []
                        single_type_to_arg([single], [type[0], :in], value)
                        adder.call(index, value.first)
                    end
                    
                    results << result
                else
                    # Then convert the rest into a raw MemoryPointer
                    array = ::FFI::MemoryPointer.new(:pointer, data.length)
                    data.each_with_index do |datum, i|
                        converted = []
                        single_type_to_arg([datum], [type[0], :in], converted)
                        array[i].put_pointer(0, converted.first)
                    end
                    
                    results << array
                end
            elsif type == WSTRING
                # We have to convert the arg to a unicode string
                results << XPCOMC::Lib.xpcom.string_to_utf16(args.shift)
            elsif type == BOOL
                results << (args.shift ? 1 : 0)
            elsif type.to_s[0,1] == type.to_s[0,1].upcase
                # Try to get the class from the interfaces
                interface = Model.get(type)
                val = args.shift
                
                results << if interface.superclass == COM::AbstractInterface
                               # For interfaces, we need the COM object
                               val && val.implementer.object
                           elsif interface.superclass == COM::AbstractEnum
                               # For enums, we need the value of the enum
                               interface.index(val)
                           end
            else
                # Simply replace spec item with next item in args
                # list
                results << args.shift
            end
        end
    end




    
    def read_by_type(ptr, type)
        # Retrieve information
        _, reader = mangling(type)

        # Try default pointer reader
        method = :"read_#{reader}"
        return ptr.send(method) if ptr.respond_to?(method)

        # Custom reader
        case reader
        when :unicode_string then read_unicode_string(ptr)
        when :boolean        then read_boolean(ptr)
        when :interface      then read_interface(ptr, type)
        when :enum           then read_enum(ptr, type)
        else raise "don't know how to dereference pointer of type #{type}"
        end
    end
    
    def get_array_by_type(ptr, type, length)
        # Shortcut
        return [] if length == 0

        # Retrieve information
        _, reader = mangling(type)
        ary_ptr = ptr.read_pointer

        # Try default pointer reader
        method = :"get_array_of_#{reader}"
        return ary_ptr.send(method, 0, length) if ary_ptr.respond_to?(method)

        # Custom reader
        case reader
        when :unicode_string then get_array_of_unicode_string(ary_ptr, length)
        when :boolean        then get_array_of_boolean(ary_ptr, length)
        when :interface      then get_array_of_interface(ary_ptr, type, length)
        when :enum           then get_array_of_enum(ary_ptr, type, length)
        else raise "don't know how to dereference array of type #{type}"
        end
    ensure
        XPCOMC::Lib.xpcom.free(ary_ptr)
    end


    ## Read_*
    def read_binary_blob(ptr, size)
        XPCOMC::Lib.xpcom.binary_to_string(ptr.read_pointer, size)
    end

    def read_unicode_string(ptr)
        XPCOMC::Lib.xpcom.utf16_to_string(ptr.read_pointer) || ''
    end    
    
    def read_boolean(ptr)
        ptr.read_int != 0
    end

    def read_interface(ptr, name)
        ptr = ptr.read_pointer
        return nil if ptr.null?        
        Model.create(name, ptr)
    end
    
    def read_enum(ptr, name)
        Model.get(name)[ptr.get_uint(0)]
    end
    

    ## get_array_of_*
    def get_array_of_unicode_string(ptr, length)
        ptr.get_array_of_pointer(0, length).map do |pointer|
            XPCOMC::Lib.xpcom.utf16_to_string(pointer)
        end
    end

    def get_array_of_boolean(ptr, length)
        ptr.get_array_of_int(0, length).map do |value|
            value != 0
        end
    end

    def get_array_of_interface(ptr, type, length)
        klass = Model.get(type)
        ptr.get_array_of_pointer(0, length).map do |pointer|
            klass.new(pointer)
        end
    end

    def get_array_of_enum(ptr, type, length)
        klass = Model.get(type)
        ptr.get_array_of_uint(0, length).map do |value|
            klass[value]
        end
    end
    
end

end
end
end
