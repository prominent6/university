def getNum(): #获取用户输入
    nums=[] #
    iNumStr=input()
    while iNumStr !='0':
        nums.append(eval(iNumStr))
        iNumStr=input()
    return nums
def mean(numbers): #计算平均值
    s=0.0
    for num in numbers:
        s+=num
    return s/len(numbers)
n=getNum()  #列表
m=mean(n)
zhengshu=0
fushu=0
for i in n:
    if(i<0):
        fushu=fushu+1
    elif(i>0):
        zhengshu=zhengshu+1
print(m)
print(zhengshu)
print(fushu)