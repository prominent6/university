n=int(input())
a=[]
b=[0]*n
#创建n*n阶矩阵
for i in range(n):
    a.append(b[:])
s=n*n #魔方阵最大的数值
c=1 #放进数组里的值
x,y=0,0
m=n #当前的排数
#n为当前列数
while c<=s:
#从左到右
    for i in range(n):
        a[y][x]=c
        c=c+1
        x=x+1
    x=x-1
    #少了一排
    m=m-1
    y=y+1#转向下一排开始下一次
#最右边从上到下
    for j in range(m):
        a[y][x]=c
        c=c+1
        y=y+1
    y=y-1
    #少了一列
    n=n-1
    x=x-1 #移到左边一个数开始下一次
#从右往左
    for k in range(n):
        a[y][x]=c
        c=c+1
        x=x-1
    x=x+1
    #少了一排
    m=m-1
    y=y-1 #移到上一排开始下一次
#从下往上
    for p in range(m):
        a[y][x]=c
        c=c+1
        y=y-1
    y=y+1
    #少了一列
    n=n-1
    x=x+1#移到右边一列开始下一次
with open("file.out","w") as file:
    for d in a:
        for c in d:
            file.write("%5d"%c)
        file.write("\n")