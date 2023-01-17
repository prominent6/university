import numpy as np
n,m=map(int,input().split(' '))
a=np.zeros((1,n))
for i in range(0,n+1):
    a[0][m-1]=1
print(a)