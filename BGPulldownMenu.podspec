Pod::Spec.new do |s|
  s.name         = "BGPulldownMenu"
  s.version      = "0.0.1"
  s.summary      = "A pulldown menu for all iOS devices"
  s.description  = <<-DESC
A pulldown menu designed for all iOS devices, it supports both navigation controllers and views, users can either pull it down or activate by tapping a button.
                   DESC
  s.homepage     = "https://github.com/lattejed/iOSPullDownMenu"
  s.license      = { :type => 'MIT', :file => 'LICENSE' } 
  s.author       = { "Bernard Gatt" => "bernard@blinkrocket.com" }
  s.source       = { :git => "git@github.com:lattejed/iOSPullDownMenu.git", :tag => "v#{s.version}" }
  s.source_files = "*.{h,m}"
  s.requires_arc = true
end
