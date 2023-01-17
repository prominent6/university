#方法二 将杨辉三角想成一个列表里多个列表
def trigon(list,alist,n):
   blist=[1]
   if n>0:
        for j in range(len(alist)):
           if j <len(alist) -1:
               sum=alist[j]+alist[j+1]
               blist.append(sum)
        blist.append(1)
        list.append(blist)
        n-=1
        trigon(list,blist,n)
def main():
    list1 = [1]  # 第一行
    list2 = [1, 1]  # 第二行
    n=int(input())
    list=[]
    list.append(list1)
    list.append(list2)
    trigon(list,list2,n - 2) # 计算出整个杨辉三角
    # print(list[n-1]) #最后一排数
    l=len(str(max(list[n-1])))
    for i in range(0,n):
        j=0
        while j<n-i: # 打印每个数之间的间隔
            print(' '*l,end='')
            j+=1
        j=0
        while j<=i:
            print(' '*(l-len(str(list[i][j]))),end='') #补位
            print(list[i][j],end='')
            print(' '*l,end='') #数字后
            j+=1
        print(end='\n')
main()

''' 
#格式实在是调整不了了
#自己的 方法一 二维数组思维方向
# 2*M列,M行二维数组
M=int(input())
a=[[0]*2*M for i in range(M)] 
#先打印1
for i in range(0,M):
    j=i+M-1
    a[i][j]=1
for j in range(0,M-1):
    i=M-1-j
    a[i][j]=1
#其他数字
k=M-1
for i in range(2,M):
    for j in range(k,k+2*(i-2)+1,2):   
        a[i][j]=a[i-1][j-1]+a[i-1][j+1]
    k=k-1

l=len(str(max(a[M-1])))
print(l)
for k in range(0,M):#用空格替换0
    for l in range(0,2*M):
        if a[k][l]==0:
            a[k][l]=""
for i in range(0,M):
        for j in range(0,2*M):
            print(a[i][j],end=' ')
        print(end='\n') '''

''' #方式三
n = int(input())
m = [[0 for x in range(2*n-1)] for y in range(2*n-1)]
for j in range(n):
    if j==0:#赋值1
        m[j][n-1]=1
    elif j==1:#赋值1
        m[j][n-2]=1
        m[j][n]=1
    else:#赋值1
        m[j][n-1-j]=1
        m[j][n-1+j]=1
        temp=n-1-j
        while(temp<n-3+j):#进行相加操作
            temp+=2
            m[j][temp]=m[j-1][temp-1]+m[j-1][temp+1]
for k in range(2*n-1):#用空格替换0
    for l in range(2*n-1):
        if m[k][l]==0:
            m[k][l]=" "
for u in range(n):#输出金字塔
    for v in range(2*n-1):
        print(m[u][v],end="")
        if v==2*n-2:#换行
            print("\n") '''