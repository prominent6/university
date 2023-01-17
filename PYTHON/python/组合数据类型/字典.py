from audioop import reverse


Dcountry={"中国":"北京","美国":"华盛顿","法国":"巴黎"}
print(Dcountry)
print(Dcountry["中国"])
Dcountry["中国"]='大北京'
print(Dcountry)
Dcountry["xiaolan"]='xiaosu' #新增
Dp={}  #直接使用{}生成空的字典，而不是集合

#通过get()获得键对应的值
for key in Dcountry:
    print(key)

#判断字符是否是Dcountry的键
if "中国" in Dcountry:
    print(1)  #1

#clear()清空



