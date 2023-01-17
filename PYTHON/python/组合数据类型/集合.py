s={425,"bit",(10,"cs"),424,425}
print(s) 
#打印效果与定义顺序可以不一致,还能过滤重复元素

#成员关系测试
y="BIT" in {"python","bit","good",123} #false
print(y)

#元素去重
tup=("python","bit","good",123,123)
print(set(tup))

#去重同时删除数据项
newtup=tuple(set(tup)-{'python'})