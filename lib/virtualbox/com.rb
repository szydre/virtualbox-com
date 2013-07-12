require_relative 'com/exceptions'
require_relative 'com/abstracts'

module VirtualBox
module COM
    # The Model module will hold all the model descriptions
    module Model
        def self.get(name)
            self.const_get(name, false)
        rescue NameError
            raise ModelNotFoundException, name
        end

        def self.fetch(name)
            self.const_get(name, false)
        rescue NameError
            nil
        end
    end

    # Information about VirtualBox version
    def self.supported? ; !version.nil? 	 		   ; end
    def self.version    ; virtualbox.version_normalized rescue nil ; end
    def self.revision   ; virtualbox.revision.to_s      rescue nil ; end

    # Helpers for inclusion
    def virtualbox ; COM.virtualbox ; end
    def session    ; COM.session    ; end
end
end




require_relative 'com/xpcomc-ffi'
