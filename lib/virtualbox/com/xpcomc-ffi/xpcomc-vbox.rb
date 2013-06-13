module VirtualBox
module COM

module XPCOMC
    extend ::FFI::Library

    # Constant used to initialize the XPCOM C interface
    VERSION = 0x00020000


    # Callback types for VBOX XPCOMC
    callback :pfnGetVersion,      [],                                  :uint
    callback :pfnComInitialize,   [:string,:pointer,:string,:pointer], :void
    callback :pfnComUninitialize, [],                                  :void
    callback :pfnComUnallocMem,   [:pointer],                          :void
    callback :pfnUtf16Free,       [:pointer],                          :void
    callback :pfnUtf8Free,        [:pointer],                          :void
    callback :pfnUtf16ToUtf8,     [:pointer, :pointer],                :int
    callback :pfnUtf8ToUtf16,     [:string,  :pointer],                :int
    callback :pfnGetEventQueue,   [:pointer],                          :void

    class VBox < ::FFI::Struct
        layout  :cb,                 :uint,
                :uVersion,           :uint,
                :pfnGetVersion,      :pfnGetVersion,
                :pfnComInitialize,   :pfnComInitialize,
                :pfnComUninitialize, :pfnComUninitialize,
                :pfnComUnallocMem,   :pfnComUnallocMem,
                :pfnUtf16Free,       :pfnUtf16Free,
                :pfnUtf8Free,        :pfnUtf8Free,
                :pfnUtf16ToUtf8,     :pfnUtf16ToUtf8,
                :pfnUtf8ToUtf16,     :pfnUtf8ToUtf16,
                :pfnGetEventQueue,   :pfnGetEventQueue,
                :uEndVersion,        :uint


        def free(pointer)
            return if pointer.nil? || pointer.null?
            self[:pfnComUnallocMem].call(pointer)
        end

        def binary_to_string(pointer, size)
            return nil if pointer.null?
            return ''  if size == 0
            pointer.read_bytes(size)
        ensure
            self[:pfnComUnallocMem].call(pointer) if !pointer.null?
        end

        def string_to_utf16(string)
            return nil if string.nil?
            ptr = ::FFI::MemoryPointer.new(:pointer)
            self[:pfnUtf8ToUtf16].call(string.dup, ptr)
            ptr.read_pointer()
        end
        
        def utf16_to_string(pointer)
            return nil if pointer.null?
            result_pointer = ::FFI::MemoryPointer.new(:pointer)
            self[:pfnUtf16ToUtf8].call(pointer, result_pointer)
            result_pointer.read_pointer().read_string()
        ensure
            self[:pfnUtf16Free].call(pointer       ) if !pointer.null?
            self[:pfnUtf8Free ].call(result_pointer) if !result_pointer.null?
        end
    end
end

end
end
