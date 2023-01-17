# 快速筛选素数的方法是：2是素数，那么2的所有倍数都不是素数，3是素数，那么3所有的倍数都不是素数……以此类推。
def isss(i,limit): #判断i是否为素数
    if i==2:
         return True
    for j in range(2,i):
        if i%j==0:
            return False
        else:
            return True
limit=int(input("input a number:"))
# max=int(limit**0.5)
a=[]
for i in range(0,limit+1):
    a.append(1)
for i in range(2,limit+1):
    if isss(i,limit): 
        #如果i是素数，判断j是否为i的倍数数
        for j in range(i+1,limit):
            if(j%i==0):
                a[j]=0
    else:
        a[i]=0
# print(a[2])
for k in range(2,limit+1):
    if a[k]==1:
        print(k)
''' limitIter=int(limit**0.5)
lst=list(range(2,limit+1)) #产生列表
print(*enumerate(lst)) #加索引号
for index,value in enumerate(lst):
    #返回可迭代对象
    lst[index+1:]=list(filter(lambda x: x%value !=0,list[index+1:])) #2之后的所有数据 '''


