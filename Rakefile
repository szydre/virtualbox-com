# -*- ruby -*-
require "rbconfig"
require "rubygems"
require "bundler/setup"

Bundler::GemHelper.install_tasks

DATA_DIR = File.dirname(__FILE__) + "/data"
LIB_DIR  = File.dirname(__FILE__) + "/lib"
COM_DIR  = "#{LIB_DIR}/virtualbox/com"

task :generate do |t|
    api  = "4.2"
    xidl = "#{DATA_DIR}/VirtualBox-#{api}.xidl"
    file = "#{COM_DIR}/model/#{api}-generated.rb"
    ruby "scripts/xidl-conv.rb --xidl #{xidl} --file #{file}"
end
