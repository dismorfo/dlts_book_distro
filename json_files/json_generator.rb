require 'rubygems'
require 'json'

file = File.open("columbia_aco000020_2up.txt", "r")
#file = File.open("sample.txt", "r")

# get header
keys = file.readline().chomp!.split(" ")
values = []
result = {} 
agreg = []
assoc={}
# parse values
file.each_line.with_index do | line,index |
  assoc_member = {}
  assoc={}
  filename=""
  line.chomp.split(" ").each.with_index do |v,iter|
    if iter>0 
      assoc_member[keys[iter]] = v
    else
      filename= v[0..-7]
    end
  end
  filename_jpg = "public://"+filename+"_s"+".jpg"
  f_schema= "public://"+filename+"_d.jp2" 
  assoc_member[keys[0]]= f_schema
  assoc["cm"]=assoc_member
  assoc["ri"]= filename_jpg
  assoc["id"] = filename
  agreg[index] = assoc
end
result["columbia_aco000020"]=agreg
puts result.to_json
