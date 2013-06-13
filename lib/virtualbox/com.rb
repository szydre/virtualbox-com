module VirtualBox
module COM
    # Versions of Virtualbox that are supported
    SUPPORTED_VERSIONS = {
        "4.2" => [ "3b2f08eb-b810-4715-bee0-bb06b9880ad2",
                   "12f4dcdb-12b2-4ec1-b7cd-ddd9f6c5bf4d" ],
    }

    # The Model module will hold all the model descriptions that will
    # be loaded according to the VirtualBox version
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

        def self.create(name, *args)
            self.get(name).new(*args)
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


# Exceptions
require_relative 'com/exceptions'

# Abstract class for model definitions
require_relative 'com/abstract_enum'
require_relative 'com/abstract_interface'

# Classes
require_relative 'com/iid'

# Implementation
# It needs to add the following to VirtualBox::COM
#  - Methods: virtualbox, session
#  - Class  : Implementer
#  - Types  : INT8, INT16, INT32, INT64, UINT8, UINT16, UINT32, UINT64,
#             WSTRING, BOOL
require_relative 'com/xpcomc-ffi'
