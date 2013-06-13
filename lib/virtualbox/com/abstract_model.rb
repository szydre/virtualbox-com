module VirtualBox
module COM

class AbstractModel
    def self.iid(str)
        const_set(:IID, IID.new(str))
    end
        
    def self.setup(opts={})
    end
end

end
end
