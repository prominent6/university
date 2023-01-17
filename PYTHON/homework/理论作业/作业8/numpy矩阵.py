import numpy as np
a=np.eye(4)
for i in range(1,5):
    a[i-1][i-1]=i
print(a)