height,weight=eval(input("请输入身高(m)和体\重(公斤)[用逗号隔开]"))
bmi=weight/pow(height,2)
print("bmi数值为:{:.2f}".format(bmi))
who,dom="","" #
if bmi<18.5: #who标准
    who="thin"
elif bmi<25:
    who="normal"
else:
    who="fat"
if bmi<18.5: #我国卫生部标准
    dom="thin"
elif bmi<24:
    dom="normal"
elif bmi<28:
    dom="fat"
else:
    dom="very fat"
print("bmi指标为:国际'{0}',国内'{1}'".format(who,dom))