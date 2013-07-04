module VirtualBox
module COM


class Sig
    # Store and normalize signatures
    def initialize(sig)
        @sig = sig.map {|item|
            if item.is_a?(Array) && item[0] == :out 
            then [ item[1], :out ]
            else [ item,    :in  ]
            end
        }.freeze.each{|type, way|
            # Sanity check: only `[type]` or `type`
            if type.is_a?(Array) && type.length != 1
                raise ArgumentError,  "only arrays of simple type are supported"
            end
        }
    end


    def size
        @sig.size
    end

    def in  ; @sig.select {|type, way| way == :in  } ; end
    def out ; @sig.select {|type, way| way == :out } ; end

    def to_c
        @sig.map {|type, way| is_array = type.is_a?(Array)
            case way
            when :out
                if is_array
                then [PTR, PTR] 
                else PTR
                end
            when :in
                if is_array then [UINT32,  PTR] 
                elsif model = Model.fetch(type)
                    if    model <= COM::AbstractInterface then PTR
                    elsif model <= COM::AbstractEnum      then UINT32
                    end
                else type
                end
            end
        }.unshift(PTR).flatten	# Add `this` element
    end



    # Enhance signature by adding variable declarations
    def with_var_decl
        i = 0
        @sig.map {|type, way| is_array = type.is_a?(Array)
            v = "v#{i+=1}"
            vdecl = if is_array then [["#{v}_size", UINT32], [v, PTR]]
                    elsif model = Model.fetch(type)
                        if    model <= AbstractInterface then [[v, PTR]]
                        elsif model <= AbstractEnum      then [[v, UINT32]]
                        end
                    else [[v, type]]
                    end
            [type, way] + vdecl
        }
    end






    def to_c_func(name, vtbl, fun)
        io = $stdout
        ins = self.in;

        args= ([ 'self' ] + ins.size.times.map {|i| "i#{i}"})
            .map {|v| "VALUE #{v}"}.join(', ')

        io << "static VALUE #{name}(#{args}) {\n"
        io << "  VALUE  res      = Qundef;\n"
        io << "  struct obj *obj = DATA_PTR(self);\n"
        io << "  struct #{vtbl} *vtbl = obj->vtbl;\n"

        ins.each_index{|i| type, = ins[i]
            io << "  i#{i} = " << do_prepare(type, "i#{i}") << ";\n"
        }


        args = self.with_var_decl

        args.each{|type, way, *vdecl|
            vdecl.each{|var, decl|
                io << "  #{decl} #{var};\n"
            }
        }

        i = 0;
        args.each {|type, way, *vdec| is_array = type.is_a?(Array)
            if way == :in
                io << "  " << get_extract(type, "i#{i}", vdec.map{|var, dec|
                                       "&#{var}"}) << ";\n"
            end
            i += 1
        }

        a = args.map {|type, way, *vdec| vdec.map{|var, dec|
                if way == :out then "&#{var}" else var end } }.flatten
        a.unshift('obj');
        io << "  NS_CHECK(vtbl->#{fun}(" << a.join(', ') << "));\n"



        io << "  res = rb_ary_new();\n"
        i = 0
        o = 0
        args.each {|type, way, *vdec| is_array = type.is_a?(Array)
            if way == :out
                io << "  rb_ary_push(res, " << get_convert(type, vdec.map{|var, dec|
                                       "#{var}"}) << ");\n"
                o += 1
            end
            i += 1
        }

        io << "  res = rb_ary_entry(res, 0);\n" if o == 1
        io << "  return res;\n"
        io << "}\n"

    end



    def get_convert(type, *args)
        is_array = type.is_a?(Array)
        type     = type[0] if is_array
        
        m, *a = to_converter(type)
        m = "array_#{m}" if is_array && type != OCTET
        m = "convert_#{m}"
        m + '(' + (args + a).join(', ') + ')'
    end
    
    def get_extract(type, src, *args)
        is_array = type.is_a?(Array)
        type     = type[0] if is_array
        a        = []

        if is_array && type == OCTET
            m = :blob
        elsif is_array
            m = :carray
        else
            m, *a = to_converter(type)
        end    
        m = "extract_#{m}"
        m + '(' + ([src] + args + a).join(', ') + ')'
    end
    
    def get_in_and_out(prefix, type, src, *args)
    end

    def do_prepare(type, src)
        is_array = type.is_a?(Array)
        type     = type[0] if is_array
        
        m, *a = to_converter(type)
        m = "array_#{m}" if is_array && type != OCTET
        m = "prepare_#{m}"
        m + '(' + ([src] + a).join(', ') + ')'
    end



    def to_converter(type)
        is_array = type.is_a?(Array)
        type     = type[0] if is_array
        
        case type
        when BOOL    then :bool
        when PTR     then :ptr
        when OCTET   then :blob
        when INT16   then :int16
        when INT32   then :int32
        when INT64   then :int64
        when UINT16  then :uint16
        when UINT32  then :uint32
        when UINT64  then :uint64
        when WSTRING then :wstring
        else
            if model = Model.fetch(type)
                kind = if    model <= AbstractInterface then :interface
                       elsif model <= AbstractEnum      then :enum
                       else raise "unknown model #{mode.class}"
                       end 
                [ kind, "c#{type}" ]
            else raise "unknown type #{type}"
            end
        end
    end


    
end

end
end
