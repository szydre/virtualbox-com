module VirtualBox
module COM

class AbstractModel
end

class AbstractEnum < AbstractModel
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
            @map, @rmap = m.freeze, r.freeze
        end
        
        @map
    end

    # Iterate over the enum, yielding each item to a block.
    def self.each
        @map.each do |key, value|
            yield key
        end
    end

    # Returns the symbol/value association
    def self.[](index)
        case index
        when Symbol then @map[index]
        else             @rmap[index]
        end
    end

    def self.symbol(value)
        @rmap[value]
    end
    
    def self.value(symbol)
        @map[symbol]
    end

end

class AbstractInterface < AbstractModel
end

end
end
