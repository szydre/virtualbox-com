module VirtualBox
module COM

class AbstractModel
    def self.iid(str)
        const_set(:IID, IID.new(str))
    end
end


#
# # Defining an Interface
#
# Defining an interface is done by subclassing AbstractInterface and
# using the provided class methods to define the COM methods and
# properties. A small example class is shown below:
#
#     class Time < AbstractInterface
#       function :now, [[:out, :uint]]
#       property :hour, :uint
#     end
#
# # Accessing an Interface
#
#
#     # Assume `time` was retrieved already
#     puts time.foo.to_s
#     time.hour = 20
#     x = time.now
#
# The above example shows how the properties and functions can be used
# with a given interface.
#
class AbstractInterface < AbstractModel
    attr_reader :implementer

    class << self
        # Adds a function to the interface
        def function(name, type, args, opts={})
            h[name] = Spec::Function.new(name, type, args, opts)
            define_method(name) { |*args| 
                @implementer.call_function(spec, *args) 
            } unless spec.hide?
        end

        # Adds a property to the interface
        def property(name, type, opts={})
            h[name] = Spec::Property.new(name, type, opts)
            define_method(name) {
                @implementer.read_property(spec)
            } unless spec.hide?
            define_method(:"#{name}=") { |value|
                @implementer.write_property(spec, value)
            } unless spec.hide? || spec.readonly?
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


    # Initializes the interface with the given implementer
    def initialize(*args)
        @args = args
        @implementer = Implementer.new(self, *args)
    end
    

    # Cast to another model
    def cast(name)
        @implementer.cast(name, *@args)
    end

    # Concise inspect
    def inspect
        "#<#{self.class.name}>"
    end
end


end
end
