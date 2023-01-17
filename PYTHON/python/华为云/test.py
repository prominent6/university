# print('I am %(name)s,I am %(age)d years old,' % {'name':'David','age':20})

#del删除语句，删除列表和字典中的一项，删除列表中的一个切片，也可以删除一个对象。
#pop()方法会返回一个值
from operator import truediv


alist=list(range(0,10))
# print(alist) 
#[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

# del alist[0]
# print(alist) 
#[1, 2, 3, 4, 5, 6, 7, 8, 9]
# print(alist.pop(0))  #1

# del alist[1:3]
# print(alist) 
#[0, 3, 4, 5, 6, 7, 8, 9] 

# del alist
# print(alist) #NameError



''' lan='python'
#if语句
if lan=='c':
    print("old man",lan)
elif lan=='python':
    print("young man",lan)
else:
    print('Are')
#遍历
for x in lan:
    print(x)
 '''



''' nameList=["xiaosu",'xiaolan']
#1. for语句+enumerate来生成迭代器
for index,name in enumerate(nameList):
    print('seat %d belongs to %s' % (index,name))

#2.通过nameList元素下标迭代，在生成range对象时使用len,就不会出现异常
for index in range(0,len(nameList)):
    print("welcome,",nameList[index],'!')
 '''


