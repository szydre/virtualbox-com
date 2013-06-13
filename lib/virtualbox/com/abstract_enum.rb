require_relative "abstract_model"

module VirtualBox
module COM

# Represents a C enum type. Provides functionality to easily convert
# an int value to its proper symbol within the enum.
class AbstractEnum < AbstractModel
    extend Enumerable

    # Defines the mapping of int => symbol for the given Enum.
    # The parameter to this can be an Array or Hash or anything which
    # respond to `each` and yield a key/value pair.
    # If a value appear more than once, only the first is kept
    # If value is left nil, it will return the current mapping
    def self.map(value = nil)
        if value
            m, r = {}, {}
            if Array === value
            then value.each_index {|i|   m[value[i]] = i; r[i] = value[i] }
            else value.each       {|k,v| m[k] = v;        r[v] ||= k      }
            end            
            @map, @reverse_map = m, r
        end
        
        @map
    end

    # Returns the symbol associated with the given key
    def self.[](index)
        case index
        when Symbol then @map[index]
        else             @reverse_map[index]
        end
    end

    # Returns the index associated with a value
    def self.index(key)
        @map[key]
    end

    # Iterate over the enum, yielding each item to a block.
    def self.each
        @map.each do |key, value|
            yield key
        end
    end
end

end
end
