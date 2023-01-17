import math
# 用户登录功能
''' for i in range(3):
    name=input("请输入用户名：")
    key=input("请输入密码：")
    if name=='admin' and key=='123':
        print("登录成功！")
        break
    elif i<2:
        print("登陆失败，请再输入！")
    else:
        print("登陆失败！");
 '''


# 会报错
''' x="Python" 
y=2
print(y+x) '''

# print(math.sqrt(36)*math.sqrt(81)) //54.0

# print(chr(65))

''' mul=1 
for i in range(1,101):
    if(i%7==0 and i%3!=0):
        mul*=i
print(mul) '''


''' a=[1,2,3,None,(),[]]
print(len(a)) #6 '''


''' s1=[4,5,6]
s2=s1
s1[1]=0
print(s2)  #[4, 0, 6] '''


''' s=['a','b']
s.append([1,2])
s.insert(1,7)
print(s)  #['a', 7, 'b', [1, 2]] '''

# print(sum(range(10)))  #45

''' s1=[1,2,3,4]
s2=[5,6,7]
print(len(s1+s2)) #7 '''

''' s='abcdefg'
print(s[::-1]) #gfedcba '''

# print(tuple([1,2,3]),list([1,2,3]))  #(1, 2, 3) [1, 2, 3]

# 匿名函数
''' f=lambda x,y:x*y
print(f(12,34)) '''

''' d=lambda p:p*2
t=lambda p:p*3
x=2
x=d(x)
x=t(x)
print(x) '''

''' x=30
def func():
    global x
    x=20
func()
print(x) '''

''' x={1:2}
x[2]=3
print(x) '''

''' def Sum(a,b=3,c=5):
    return sum([a,b,c])
print(Sum(a=8,c=2))
print(Sum(8))
print(Sum(8,2))
 '''

# 闰年
''' year=int(input("请输入："))
if(year%400==0 or year%4==0 and year%100!=0):
    print("Yes!")
else:
    print("No!") '''

''' s=0
for i in range(1,101):
    s+=i
else:
    print(1) '''

''' def demo(lst,k):
    if k<len(lst):
        return lst[k:]+lst[:k]
print(demo([1,2,3,4,5,6],4)) '''

''' ls=[2,5,16,24,37]
n=int(input("输入一个整数："))
ls.append(n)
ls.sort()
 '''

 