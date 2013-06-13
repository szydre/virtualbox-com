require_relative 'sig'

module VirtualBox
module COM
module XPCOMC

class Spec
    attr_reader :name

    def hide?
        @opts[:hide]
    end

    class Function < Spec
        def initialize(name, type, args, opts)
            @name, @type, @args, @opts = name, type, args, opts
        end

        def signatures
            { name => to_call }
        end

        def to_call
            Sig.new( if @type.nil?
                     then @args
                     else @args + [ [ :out, @type ] ]
                     end)
        end
    end
    
    class Property < Spec
        attr_reader :getter, :setter

        def initialize(name, type, opts) 
            @name, @type, @opts = name, type, opts
        end

        def signatures
            r = {}
            r[getter] = to_read 
            r[setter] = to_write unless self.readonly?
            r
        end

        def readonly?
            @opts[:readonly]
        end

        def getter	; :"get_#{@name}" 		; end
        def setter	; :"set_#{@name}" 		; end
        def to_read	; Sig.new([[:out, @type]]) 	; end
        def to_write	; Sig.new([ @type ]) 		; end
    end
end

end
end
end
