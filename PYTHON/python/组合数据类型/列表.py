ls=[425,134,"wo",("you","me"),222]
print(ls) 
#[425, 134, 'wo', 
# ('you', 'me'), 
# 222]

print(ls[3][-1][0]) #m
w=list("好好学习，天天向上")
print(w) #['好', '好', '学', '习', '，', '天', '天', '向', '上']

list() #[]


#列表类型的操作
vlist=list(range(5))
print(vlist) #[0, 1, 2, 3, 4]

vlist[3]="python"
print(vlist) #[0, 1, 2, 'python', 4]

#列表的遍历
for e in vlist:
    print(e,end=" ")


#列表之间的比较, collections.Counter（）方法
import collections
ls1=[30,1,2,0]
ls2=[1,21,133]
if collections.Counter(ls1)==collections.Counter(ls2):
    print("the same");
else:
    print("not the same")

#浅拷贝
ls1=[1,43]
ls2=ls1
ls1[0]=22
print(ls1)
print(ls2) #[22, 43]

#len()
ls=[[2,3,7],
[[3,5],
25],
[0,9]]
print(len(ls)) #3


# 列表元素的访问
l=[1,2,3,4,5,6,7,8,9,10]
print(l[::-1])  
#[10, 9, 8, 7, 6, 5, 4, 3, 2, 1]  
print(l[::4]) #[1, 5, 9]
print(l[5:]) #[6, 7, 8, 9, 10]
print(l[:5]) #[1, 2, 3, 4, 5]


#列表解析式
#在空列表list中添加数字1-10
list=[i for i in range(1,11)]
print(list) 
#[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


#count()函数——返回元素在列表中出现的次数
City = ["杭州","苏州","广州","苏州","通州","扬州","苏州"]
print("苏州有多少个：",City.count("苏州")) #3