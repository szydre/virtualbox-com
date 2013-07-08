require 'bundler/setup'
require 'getoptlong'

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

require 'virtualbox/com/abstracts'
require_relative 'abstracts'
require_relative 'sig'
require_relative 'spec'



opts = GetoptLong.new(
	[ "--api",		GetoptLong::REQUIRED_ARGUMENT ],
	[ "--file",		GetoptLong::REQUIRED_ARGUMENT ],
	[ "--help",		GetoptLong::NO_ARGUMENT ] )

api  = nil
file = nil

begin
    opts.each do |opt, arg|
	case opt
	when "--api"  then api  = arg
	when "--file" then file = arg
        when "--help" then raise
	end
    end
    raise if api.nil?
rescue
    $stderr.print <<EOT
usage: xidl-conv.rb: --api version [--file output]
    --api         Model description 
    --file        path to generated output
    --help        Show this message.

EOT
    exit 0
end


require "virtualbox/com/model/#{api}-generated"
OUT = file.nil? ? $stdout : File.open(file, 'w')





M  = VirtualBox::COM::Model


M.constants.each {|name| model = VirtualBox::COM::Model.get(name)
    next unless model <= VirtualBox::COM::AbstractInterface
    OUT << "struct #{name} {\n"
    if (s = model.superclass) < VirtualBox::COM::AbstractInterface
        OUT << "  struct #{s.nickname} #{s.nickname};\n"
    end
    model.members.each {|spec|
        spec.signatures.each {|n, sig|
            OUT << "  uint32_t (*#{n})(#{sig.to_c.join(', ')});\n"
        }    
    }
    OUT << "};\n"
}



M.constants.each {|name| model = VirtualBox::COM::Model.get(name)
    OUT << "static VALUE c#{name} = Qundef;\n"
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


OUT << "static void comclass_init(VALUE under) {\n"
M.constants.each {|name| model = VirtualBox::COM::Model.get(name)
    kAbstract = 'c' + model.superclass.name.split('::')[-1]
    
    OUT << "  {\n"
    OUT << "    iid_t iid  = #{model::IID.to_struct};\n"
    OUT << "    VALUE c    = c#{name}\n"
    OUT << "      = rb_define_class_under(under, \"#{name}\", #{kAbstract});\n"
    OUT << "    no_instantiation(c);\n"
    OUT << "    rb_const_set(c, _IID, iid__new(&iid));\n"
    
    if model <= VirtualBox::COM::AbstractEnum
        OUT << "    VALUE h    = rb_hash_new();\n"
        model.map.each {|sym, val|
            OUT << "    rb_funcall(h, _bracketseq, 2, SYM(\"#{sym}\"), ULL2NUM(#{val}));\n"
        }
        OUT << "    rb_funcall(c, _map, 1, h);\n"
    elsif model <= VirtualBox::COM::AbstractInterface
        model.members.each {|spec|
            next if spec.hide?
            case spec
            when VirtualBox::COM::Spec::Function
                if spec.to_call.size > 15
                    warn "Binding for #{model.nickname}\##{spec.name} need to be handcrafted"
                    next
                end
                OUT << "    rb_define_method(c, \"#{spec.name}\", #{model.nickname}__#{spec.name}, #{spec.to_call.in.size});\n"                
            when VirtualBox::COM::Spec::Property
                OUT << "    rb_define_method(c, \"#{spec.name}\", #{model.nickname}__#{spec.getter}, 0);\n"
                
                OUT << "    rb_define_method(c, \"#{spec.name}=\", #{model.nickname}__#{spec.setter}, 1);\n" if !spec.readonly?
            end
        }
    end
    OUT << "  }\n"
}
OUT << "}\n"
