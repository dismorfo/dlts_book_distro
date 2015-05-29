require 'rubygems'
require 'json'
require 'mongo'

include Mongo

file = File.open("columbia_aco000020_2up.txt", "r")
#file = File.open("sample.txt", "r")
client=Mongo::Client.new('mongodb://127.0.0.1:27017/books')

# get header
keys = file.readline().chomp!.split(" ")
values = []
agreg = []
assoc={}
assoc_member={}
result={}
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
  assoc[:cm]=assoc_member
  assoc[:ri]= filename_jpg
  assoc[:_id] = filename
  result1 = client[:"books_json"].insert_one(assoc)
  agreg[index] = assoc
end
#result["book"]=agreg
#result1 = client[:"books_json_rev"].insert_one(agreg)
puts result1
