import numpy as np
a=[[1,2,3],[4,5,6]]

#常用的数组创建函数
#array()
b=np.array(a)  #a为列表或元素，来创建adarry类型数组
''' [[1 2 3]
 [4 5 6]] '''

#zeros()/ones()/empty()——非空，是很小的数字,接近0/full() 
# b=np.array([[1,2,3],[4,5,6]])
# b=np.zeros((3,2))  
# print(b)
# c=np.ones((4,3),dtype=np.int16)
# c=np.empty((3,4))
# c=np.full((3,2),9)
# print(c)

#arange()/linspace()
''' e=np.arange(2,12,2)
print(e) #[ 2  4  6  8 10],类似于range() '''
''' f=np.linspace(1,10,6) #从1到10，6段数据
print(f) '''
''' g=np.eye(3) #正方的n*n的单位矩阵，对角线为1，其余为0
print(g)
 '''


''' #常用属性

c=np.ndim(a)   #轴的个数——>几维数组
print(c) #2

d=b.dtype  #数据类型
print(d) #int32

e=b.shape  #每个维度上的大小——>行和列的个数，返回值为元组形式
print(e) #(2, 3)

f=b.size  #元素总个数
print(f) #6 '''

#形态操作方法

# b=np.array(a).reshape((x,y)) #重塑为x行y列
g=b.reshape(2,3)  #ls.reshape(x,y)
print(g)
''' [[1 2]
 [3 4]
 [5 6]] '''

#resize()
#resize 可以放大或者缩小原数组的形状：放大时，会用0补全剩余元素；缩小时，直接丢弃多余元素。

''' #ravel函数 可以将多维数组展平(也就是变回一维)
c = b.ravel()
print(c) '''

#transpose函数 将矩阵进行转置



#python计算矩阵的秩、行列式、迹，特征值和特征向量、
a = np.array([[1,1,1],
             [1,1,10],
             [1,1,15]])
np.linalg.matrix_rank(a)#返回矩阵的秩
np.linalg.det(a) #返回矩阵的行列式
a.diagonal() 
#返回矩阵的对角线元素，也可以通过offset参数在主角线的上下偏移，获取偏移后的对角线元素。 a.diagonal(offset=1)返回array([1.10])
a.trace()#返回迹，方阵的迹就是主对角元素之和。
eigenvalues ,eigenvectors= np.linalg.eig(a) 
#eigenvalues 为特征值。eigenvectors为特征向量


#z = np.dot(x, y)  矩阵的乘积
#求解两个矩阵的线性方程组  x = np.linalg.solve(A, b)