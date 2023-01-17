import math
import random
# 小写转换为大写+文件
''' s=input("请输入一个字符串：")
ss=s.upper()
f=open("b.text","w+")
f.write(ss)
f.close() '''

#九九乘法表
''' for i in range(1,10):
    for j in range(1,i+1):
        print("%d*%d=%2d"%(j,i,i*j),end=" ")
    print() '''

#求各位数之和
''' p=input("请输入一个六位数：")
sum=0
for i in p:
    sum+=eval(i)
if sum>=36 and sum<=45:
    print(p+'是幸运数字')
else:
    print(p+'不是幸运数字') '''
 
 #加密
''' n=input("请输入四位数：")
m=[]
for i in range(0,4):
    m.append((eval(n[i])+5)%10)
m[0],m[3]=m[3],m[0]
m[1],m[2]=m[2],m[1]
for i in m:
    print(i,end="")
print() '''

#定义一个学生的类
''' class Student:
    def __init__(self,name,age,score):
        self.name=name
        self.age=age
        self.score=score
    def get_name(self):
        print("姓名：",self.name)
    def get_age(self):
        print("年龄：",self.age)
    def get_score(self):
        print("成绩：",max(self.score))
zm=Student('zhangming',20,[69,88,100])
zm.get_name()
zm.get_age()
zm.get_score() '''

# print(3**2**3)  #6561

# print(chr(ord('B')))  #B

# print(math.sqrt(101)) #10


''' n=0
for m in range(101,201,2):
    k=int(math.sqrt(m))
    for i in range(2,k+2):
        if m%i==0:break
    if i==k+1:
        if n%10==0:print()
        print('%d'%m,end=' ')
        n+=1
 '''

#实现在第10列开始打印直角三角形
''' n=int(input("请输入图形的行数："))
for i in range(0,n):
    for j in range(0,10-1): #列数 
        print(" ",end=' ')
    for j in range(0,2*i+1):
        print("*",end=' ')
    print("\n") '''


''' for i in range(100,1000):
    n1=i//100;
    n2=(i%100)//10;
    n3=i%10
    if(pow(n1,3)+pow(n2,3)+pow(n3,3)==i):print(i,end=" ") '''

# print('%d%d'%(3/2,3%2))  #1 1

# 统计字符串中单词的个数
''' str=input("请输入：")
flag=0
count=0
for i in str:
    if(i==" "):
        flag=0
    else:
        if flag==0:
            flag=1
            count=count+1
print(count)
 '''

#全局变量
''' num=0
counter=0
def TestVariable():
    global counter #
    for i in range(4):counter+=1
    num=5
TestVariable()
print(counter,num) #4 0 '''


# 对比
''' print(5/2) #2.5
print('%d'%(5/2)) #2
print(eval("5/2+5%2+5//2")) #5.5 '''

#文件内容的读取方法
''' myfile=open("moon.txt","r")
# s=myfile.read(13) #整个文件读取前13个字符
# s=myfile.readline(3) #第一句读取前三个字符
# s=myfile.readlines() #以每行为元素形成一个列表
for line in myfile.readlines():
    print(line)
for line in myfile.read().splitlines():  #迭代没有空格
    print(line)
# s=myfile.read().splitlines()#没有换行符了
# print(s)
myfile.close() '''

#位运算
''' print(16<<2) #64
print(16>>2) #4 '''

''' x=list(range(20))
print(x[100:200]) #[] '''


''' def demo(newitem,old_list=[]):
    old_list.append(newitem)
    return old_list
def main():
    print(demo('a')) #['a']
    print(demo('b')) #['a', 'b']
main() '''


''' ls=[random.randint(0,100) for i in range(20)] #生成随机列表
print(ls)
#列表的偶数进行降序排序，奇数下标不变
y=ls[::2]
y.sort(reverse=True)
ls[::2]=y
print(ls)
 '''

#判断是否为回文串
''' def isPalinderome(s):
    if s==s[::-1]:
        return True
    else:
        return False
s=input("请输入一串字符串：")
if isPalinderome(s):
    print("%s is a palindrome!"%s)
else:
    print("%s is not a palindrome!"%s) '''


''' try:
    fp=open(r'moon.txt',"a+")
    print('Hello world!',file=fp)  #写入该文件
finally:
    fp.close() '''

# or的短路求值特性
''' def Join(List,sep=None):
    return (sep or ',').join(List) 
print(Join(['a','b','c']))
print(Join(['a','b','c'],":")) '''


# 判断素数
''' n=int(input("输入："))
def isPrime(v):
    lt=int(math.sqrt(v)+1)
    for i in range(2,lt):
        if(v%i==0):
            return 'No'
    return 'Yes'
print(isPrime(n)) '''

#实现sorted()
''' def sorted(v):
    t=v[::]
    r=[]
    while t:
        tt=min(t)
        r.append(tt)
        t.remove(tt)
    return r
print(sorted([3,5,2,4,1])) '''

#统计每个整数出现的频率
''' x=[random.randint(1,20) for i in range(50)]
r=dict()
for i in x:
    r[i]=r.get(i,0)+1 
for k,v in r.items():
    print(k,v) '''

#enumerate()
''' x=list(range(20))
for index,value in enumerate(x):
    if value==3:
        x[index]=5 '''

#模拟矩阵转置
''' x=[range(3*i,3*i+5) for i in range(2)]
x=list(map(list,x))
x=list(map(list,zip(*x)))
print(x) '''


''' # num//100 num//10
num=int("345")
print(num//10%10) #4 '''


