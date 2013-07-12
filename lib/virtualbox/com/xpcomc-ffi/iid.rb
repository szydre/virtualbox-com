module VirtualBox
module COM

class IID
    class FFIStruct < ::FFI::Struct
        layout :m0, :uint32,
               :m1, :uint16,
               :m2, :uint16,
               :m3, [:uint8, 8]
    end

    def initialize(obj)
        @i = case obj
             when String
                 str = obj.gsub('-', '').hex
             else raise "unsupported object type"
             end
    end

    def to_i
        @i
    end

    def to_s
        @str ||= (((@i & 0xffffffff000000000000000000000000)>> 96).to_s(16)+'-'+
                  ((@i & 0x00000000ffff00000000000000000000)>> 80).to_s(16)+'-'+
                  ((@i & 0x000000000000ffff0000000000000000)>> 64).to_s(16)+'-'+
                  ((@i & 0x0000000000000000ffff000000000000)>> 48).to_s(16)+'-'+
                  ((@i & 0x00000000000000000000ffffffffffff)     ).to_s(16))
                 .freeze
    end

    def to_a
        @ary ||= [((@i & 0xffffffff000000000000000000000000) >> 96),
                  ((@i & 0x00000000ffff00000000000000000000) >> 80),
                  ((@i & 0x000000000000ffff0000000000000000) >> 64),
                  ((@i & 0x0000000000000000ff00000000000000) >> 56),
                  ((@i & 0x000000000000000000ff000000000000) >> 48),
                  ((@i & 0x00000000000000000000ff0000000000) >> 40),
                  ((@i & 0x0000000000000000000000ff00000000) >> 32),
                  ((@i & 0x000000000000000000000000ff000000) >> 24),
                  ((@i & 0x00000000000000000000000000ff0000) >> 16),
                  ((@i & 0x0000000000000000000000000000ff00) >>  8),
                  ((@i & 0x000000000000000000000000000000ff) >>  0)]
                 .freeze
    end

    def to_ffi
        @ffi ||= begin
                     data = FFIStruct.new
                     data[:m0] = to_a[0]
                     data[:m1] = to_a[1]
                     data[:m2] = to_a[2]
                     to_a[3..-1].each_index{|i| data[:m3][i] = to_a[3..-1][i] }
                     data.freeze
                 end
    end
end

end
end
