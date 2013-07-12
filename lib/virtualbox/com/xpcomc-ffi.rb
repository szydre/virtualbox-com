# Load FFI support
if !defined?(RUBY_ENGINE) || RUBY_ENGINE == "ruby"
  require 'ffi'
end


# Add model types to fit XPCOMC FFI implementation:
#  INT8, INT16, INT32, INT64, UINT8, UINT16, UINT32, UINT64, WSTRING, BOOL
require_relative 'xpcomc-ffi/model-types'

module VirtualBox
module COM
module Model
    def self.create(name, *args)
        self.get(name).new(*args)
    end
end
end
end

# Load FFI implementation
require_relative 'xpcomc-ffi/iid'
require_relative 'xpcomc-ffi/abstracts'
require_relative 'xpcomc-ffi/xpcomc-vbox'
require_relative 'xpcomc-ffi/binding'
require_relative 'xpcomc-ffi/implementer'
require_relative 'xpcomc-ffi/spec'
require_relative 'xpcomc-ffi/lib'

# Patch VirtualBox::COM
module VirtualBox
module COM
    Implementer = XPCOMC::Implementer
    Spec        = XPCOMC::Spec

    def self.virtualbox ; XPCOMC::Lib.virtualbox ; end
    def self.session    ; XPCOMC::Lib.session    ; end    
end
end

# Init library
VirtualBox::COM::XPCOMC::Lib.init
