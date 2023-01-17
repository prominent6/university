import numpy as np
a = np.array([[1.,2.],[3.,4.]])
y = np.array([[5.],[7.]])
print(a)
#输出数组a的转置
print(a.transpose())
#输出形状为(2,2)的对角矩阵b
y1=np.eye(2)
print(y1)
#输出对角矩阵的迹
print(y1.trace())
#求解数组a和数组y的解
print(np.linalg.solve(a,y))