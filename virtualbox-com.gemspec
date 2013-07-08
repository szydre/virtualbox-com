# -*- encoding: utf-8 -*-
$:.unshift File.expand_path("../lib", __FILE__)
require "virtualbox/com/version"

Gem::Specification.new do |s|
  s.name          = "virtualbox-com"
  s.version       = VirtualBox::COM::VERSION
  s.authors       = [ "Stephane D'Alu" ]
  s.email         = [ "stephane.dalu@gmail.com" ]
  s.homepage      = "http://github.com/sdalu/virtualbox-com"
  s.summary       = "Low level VirtualBox binding"
  s.description   = "Low level VirtualBox binding using native code"
  s.extensions    = [ "ext/virtualbox-com/loader/extconf.rb",
  		      "ext/virtualbox-com/4.2/extconf.rb",
                      "ext/virtualbox-com/4.1/extconf.rb",
  		       ]	

# s.add_dependency "ffi"
  s.add_development_dependency "rake"
  s.add_development_dependency "nokogiri"

  s.has_rdoc      = false
  s.rdoc_options = %w[--exclude=*$]

  s.license       = 'GPL-2'
  

  s.files         = %w[ LICENSE Gemfile virtualbox-com.gemspec ] 	+ 
  		     Dir['scripts/*.rb']		  		+ 
		     Dir['examples/*.rb'] 				+
		     Dir['ext/**/*.{c,h,rb,inc}'] 			+
		     Dir['lib/**/*.rb'] 
  s.require_path  = 'lib'
end

