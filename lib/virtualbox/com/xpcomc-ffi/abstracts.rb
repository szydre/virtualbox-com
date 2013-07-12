module VirtualBox
module COM

class AbstractModel
    def self.iid(str)
        const_set(:IID, IID.new(str))
    end
        
    def self.setup(opts={})
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

        # Extends the current model with another one.
        # Note that redefining functions or properties is not supported.
        def extends(model)
            Model.get(model).members.each do |spec|
                if h.include?(spec.name)
                    raise "redefining of #{spec.name} is not supported"
                end
                h[spec.name] = spec
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

        # Perform final setup
        def setup
            members.each {|spec| name = spec.name
                case spec
                when Spec::Function
                    define_method(name) { |*args| 
                        @implementer.call_function(spec, *args) 
                    } unless spec.hide?
                when Spec::Property
                    define_method(name) {
                        @implementer.read_property(spec)
                    } unless spec.hide?
                    define_method(:"#{name}=") { |value|
                        @implementer.write_property(spec, value)
                    } unless spec.hide? || spec.readonly?
                end
            }
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

    # Reads a property with the given name 
    def read_property(name)
        spec = self.class.member(name)
        raise "#{name} is not a property" unless spec.kind_of?(Spec::Property)
        @implementer.read_property(spec)
    end

    # Writes a property with the given name 
    def write_property(name, value)
        spec = self.class.member(name)
        raise "#{name} is not a property" unless spec.kind_of?(Spec::Property)
        raise "property #{name} is readonly" if spec.readonly?
        @implementer.write_property(spec, value)
    end

    # Calls a function with the given name 
    def call_function(name, *args)
        spec = self.class.member(name)
        raise "#{name} is not a function" unless spec.kind_of?(Spec::Function)
        @implementer.call_function(spec, args)
    end


    # Concise inspect
    def inspect
        "#<#{self.class.name}>"
    end
end


end
end
