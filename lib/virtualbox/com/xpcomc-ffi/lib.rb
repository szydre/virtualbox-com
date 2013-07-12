require 'virtualbox/com/util'

module VirtualBox
module COM
module XPCOMC


module Lib
    SUPPORTED_VERSIONS = {
        "4.2" => [ "3b2f08eb-b810-4715-bee0-bb06b9880ad2",
                   "12F4DCDB-12B2-4EC1-B7CD-DDD9F6C5BF4D" ]
    }

    extend ::FFI::Library

    # Constant with default library path and name
    # according to running plateform
    PATH = case Util.platform
           when :mac
               [ "/Applications/VirtualBox.app/Contents/MacOS",
                 "/Applications/MacPorts/VirtualBox.app/Contents/MacOS" ]
           when :linux
               [ "/opt/VirtualBox", 
                 "/usr/lib/virtualbox",
                 "/usr/lib64/virtualbox" ]
           when :solaris
               [ "/opt/VirtualBox/amd64",
                 "/opt/VirtualBox/i386" ]
           when :freebsd
               [ "/usr/local/lib/virtualbox" ]
           else 
               [ ]
           end

    NAME = case Util.platform
           when :max then "VBoxXPCOMC.dylib"
           else           "VBoxXPCOMC.so"
           end


    def self.init
        # Only once
        return if respond_to?(:VBoxGetXPCOMCFunctions)

        # Initialize lib and attach main function
        ffi_lib_flags(:now, :local)
        ffi_lib(ENV['VBOX_APP_HOME'] || PATH.map {|path| "#{path}/#{NAME}"})
        attach_function :VBoxGetXPCOMCFunctions, [:uint], :pointer

    
        # Get the pointer to the XPCOMC struct which contains the functions
        # to initialize
        xpcom_ptr = self.VBoxGetXPCOMCFunctions(XPCOMC::VERSION)
        @@xpcom = XPCOMC::VBox.new(xpcom_ptr)


        # Initializes the VirtualBox and Session interfaces.
        # It goes through the various supported interfaces.
        SUPPORTED_VERSIONS.each {|version, iids|
            virtualbox_iid_str, session_iid_str = iids

            # Setup the OUT pointers
            virtualbox_ptr = ::FFI::MemoryPointer.new(:pointer)
               session_ptr = ::FFI::MemoryPointer.new(:pointer)

            # Call the initialization functions
            @@xpcom[:pfnComInitialize].call(virtualbox_iid_str, virtualbox_ptr,
                                               session_iid_str,    session_ptr)

            # Read the pointers from the results 
            virtualbox_ptr = virtualbox_ptr.read_pointer
               session_ptr =    session_ptr.read_pointer

            # If either pointers are null it means that 
            # the initialization was not successful
            next if virtualbox_ptr.null? || session_ptr.null?

            # Load the interface description
            require "virtualbox/com/model/#{version}-generated"
            require "virtualbox/com/model/#{version}"

            #
            @@virtualbox = Model.create(:VirtualBox, virtualbox_ptr)
            @@session    = Model.create(:Session,       session_ptr)

            break
        }
    end

    def self.xpcom      ; @@xpcom      ; end
    def self.virtualbox ; @@virtualbox ; end
    def self.session    ; @@session    ; end
end

end
end
end
