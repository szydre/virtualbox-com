# -*- encoding: utf-8 -*-
$:.unshift File.expand_path("../lib", __FILE__)
require "virtualbox/com/version"

Gem::Specification.new do |s|
  s.name          = "virtualbox-com"
  s.version       = VirtualBox::COM::VERSION
  s.platform      = Gem::Platform::RUBY
  s.authors       = ["Stephane D'Alu", "Mitchell Hashimoto"]
  s.email         = ["stephane.dalu@gmail.com", "mitchell.hashimoto@gmail.com"]
  s.homepage      = "http://github.com/sdalu/virtualbox-com"
  s.summary       = "Low level VirtualBox binding"
  s.description   = "Low level VirtualBox binding using native code"
  s.extensions    = [ "ext/virtualbox-com/4.2/extconf.rb" ]


  s.required_rubygems_version = ">= 1.3.6"
  s.rubyforge_project         = "virtualbox-com"

# s.add_dependency "ffi"
  s.add_development_dependency "rake"
  s.add_development_dependency "nokogiri"
  

  s.files         = `git ls-files`.split("\n")
  s.executables   = `git ls-files`.split("\n").map{|f| f =~ /^bin\/(.*)/ ? $1 : nil}.compact
  s.require_path  = 'lib'
end

