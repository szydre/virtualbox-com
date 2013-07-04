module VirtualBox
    module COM
        WSTRING = 'wstring_t'
        BOOL    = 'bool_t'
        OCTET   = 'char'
        PTR     = 'void *'
        INT8    = 'int8_t'
        INT16   = 'int16_t'
        INT32   = 'int32_t'
        INT64   = 'int64_t'
        UINT8   = 'uint8_t'
        UINT16  = 'uint16_t'
        UINT32  = 'uint32_t'
        UINT64  = 'uint64_t'
        
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
        
        class ModelNotFoundException < Exception
        end
    end
end

require_relative '../lib/virtualbox/com/abstracts'
require_relative 'abstracts'
require_relative 'sig'
require_relative 'spec'
require_relative '../lib/virtualbox/com/model/4.2-generated'








M = VirtualBox::COM::Model
io = $stdout



M.constants.each {|name| model = VirtualBox::COM::Model.get(name)
    next unless model <= VirtualBox::COM::AbstractInterface
    puts "struct #{name} {"
    if e = model.extends
        puts "  struct #{e.nickname} #{e.nickname};"
    end
    model.members.each {|spec|
        spec.signatures.each {|n, sig|
            puts "  uint32_t (*#{n})(#{sig.to_c.join(', ')});"
        }    
    }
    puts "};"
}



M.constants.each {|name| model = VirtualBox::COM::Model.get(name)
    io << "static VALUE c#{name} = Qundef;\n"
}


M.constants.each {|name| model = VirtualBox::COM::Model.get(name)
    next unless model <= VirtualBox::COM::AbstractInterface

    model.functions.each {|spec|
        spec.to_call.to_c_func("#{name}__#{spec.name}", name, spec.name);
    }

    model.properties.each {|spec|
        spec.to_read.to_c_func("#{name}__#{spec.getter}", name, spec.getter);
        next if spec.readonly?
        spec.to_write.to_c_func("#{name}__#{spec.setter}", name, spec.setter);

    }
}


io << "static void comclass_init(VALUE under) {\n"
M.constants.each {|name| model = VirtualBox::COM::Model.get(name)
    kAbstract = 'c' + model.superclass.name.split('::')[-1]
    if model.respond_to?(:extends) && e = model.extends
        kAbstract = 'c' + e.name.split('::')[-1]
    end

    
    io << "  {\n"
    io << "    iid_t iid  = #{model::IID.to_struct};\n"
    io << "    VALUE c    = c#{name}\n"
    io << "      = rb_define_class_under(under, \"#{name}\", #{kAbstract});\n"
    io << "    no_instantiation(c);\n"
    io << "    rb_const_set(c, _IID, iid__new(&iid));\n"
    
    if model <= VirtualBox::COM::AbstractEnum
        io << "    VALUE h    = rb_hash_new();\n"
        model.map.each {|sym, val|
            io << "    rb_funcall(h, _bracketseq, 2, SYM(\"#{sym}\"), ULL2NUM(#{val}));\n"
        }
        io << "    rb_funcall(c, _map, 1, h);\n"
    elsif model <= VirtualBox::COM::AbstractInterface
        model.members.each {|spec|
            next if spec.hide?
            case spec
            when VirtualBox::COM::Spec::Function
                if spec.to_call.size > 15
                    warn "Binding for #{model.nickname}\##{spec.name} need to be handcrafted"
                    next
                end
                io << "    rb_define_method(c, \"#{spec.name}\", #{model.nickname}__#{spec.name}, #{spec.to_call.in.size});\n"                
            when VirtualBox::COM::Spec::Property
                io << "    rb_define_method(c, \"#{spec.name}\", #{model.nickname}__#{spec.getter}, 0);\n"
                
                io << "    rb_define_method(c, \"#{spec.name}=\", #{model.nickname}__#{spec.setter}, 1);\n" if !spec.readonly?
            end
        }
    end
    io << "  }\n"
}
io << "}\n"
