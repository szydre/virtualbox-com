module VirtualBox
module COM

class IID
    def initialize(iid)
        @iid = iid
    end

    def to_s
        @iid
    end

    def to_struct
        hex = @iid.gsub('-', '')
        '{' + ([ hex[0,8], hex[8,4], hex[12,4] ].map{|e| "0x#{e}" } + 
               [ '{' + [ hex[16,2], hex[18,2], hex[20,2], hex[22,2],
                         hex[24,2], hex[26,2], hex[28,2], hex[30,2] ]
                     .map{|e| "0x#{e}" }.join(', ') + '}' ]).join(', ') + '}'
    end
end

class AbstractModel
    def self.iid(str)
        const_set(:IID, IID.new(str))
    end
        

    def self.nickname
        self.name.split('::')[-1]
    end
end

class AbstractInterface < AbstractModel
    class << self

        # Extends the current model with another one.
        # Note that redefining functions or properties is not supported.
        def extends(model = nil)
            if model.nil?
            then @model
            else @model = Model.get(model) 
            end
        rescue ModelNotFoundException
            raise "trying to extend an unknown model (#{model})"
        end


        # Adds a function to the interface
        def function(name, type, args, opts={})
            h[name] = Spec::Function.new(name, type, args, opts)
        end

        # Adds a property to the interface
        def property(name, type, opts={})
            h[name] = Spec::Property.new(name, type, opts)
        end

        # Get a member by name
        def member(name)
            h[name]
        end

        # List of members (Spec::*)
        def members
            h.values
        end

        # List of functions (Spec::Function)
        def functions
            members.select {|s| s.kind_of?(Spec::Function) }
        end

        # List if properties (Spec::Property)
        def properties
            members.select {|s| s.kind_of?(Spec::Property) }
        end

        private
        def h ; @h ||= {} ; end
    end
end

end
end
