creature="cat","dog","rabbit"
print(creature)  #('cat', 'dog','rabbit')

color=("red",0x001100,"blue",creature)
print(color) 
#('red', 4352, 'blue', 
# ('cat', 'dog'))

print(color[2]) #blue
print(color[-1][2]) #rabbit  多级索引

#用逗号隔开，返回为元组类型，实现多返回值
def func(x):
    return x,x**3
print(func(2)) #(2, 8)

a,b='dog','tiger' #实现多变量同时赋值
a,b=(b,a) #括号可以省略

import math
for x,y in ((1,0),(2,5),(3,8)): #循环遍历
    print(math.hypot(x,y)) #求多个坐标值到原点的距离