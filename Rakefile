# -*- ruby -*-
require "rbconfig"
require "rubygems"
require "bundler/setup"
require 'fileutils'


Bundler::GemHelper.install_tasks

ROOT_DIR = File.dirname(__FILE__)
DATA_DIR = "#{ROOT_DIR}/data"
LIB_DIR  = "#{ROOT_DIR}/lib"
COM_DIR  = "#{LIB_DIR}/virtualbox/com"
EXT_DIR  = "#{ROOT_DIR}/ext"

task :build => [ :generate ]

task :generate do |t|
    [ "4.2", "4.1" ].each {|api|
        xidl = "#{DATA_DIR}/VirtualBox-#{api}.xidl"
        file = "#{COM_DIR}/model/#{api}-generated.rb"
        ruby "scripts/xidl-conv.rb --xidl #{xidl} --file #{file}"
        
        file = "#{EXT_DIR}/virtualbox-com/#{api}/generated.inc"
        ruby "scripts/to_c.rb --api #{api} --file #{file}"
        FileUtils.copy_file("#{EXT_DIR}/virtualbox-com/vbox.c", 
                            "#{EXT_DIR}/virtualbox-com/#{api}/vbox.c")
    }
end
