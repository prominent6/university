#左右两边人数不一定相等
#左边上升序列k1个，右边下降序列k2个
#合唱队一共k1+k2-1个
#找到中间那个数，使得以其为终点的上升序列数和以其为起点的下降序列数相加最大
N=int(input())
b=[0]*N #以第i位同学为终点的最长上升序列的长度
maxn=0
c=[0]*N #以第i位同学位起点的最长下降序列长度
a=list(map(int,input().split(' ')))

#以第i位同学为终点的最长上升序列的长度
b[0]=1
for i in range(1,N):
    maxn=0   ###
    for j in range(0,i):
        if a[i]>a[j]:
            if b[j]>maxn:
                maxn=b[j]
    b[i]=maxn+1
# print(b)
#以第i位同学为起点的最长下降序列长度
c[N-1]=1
i=N-2
while i>=0:
    maxn=0 ###
    for j in range(i+1,N):
        if a[i]>a[j]:
            if c[j]>maxn:
                maxn=c[j]
    c[i]=maxn+1
    i-=1
# print(c)
ans=0
for i in range(0,N):
    if b[i]+c[i]>ans:
        ans=b[i]+c[i]
print(N-ans+1)