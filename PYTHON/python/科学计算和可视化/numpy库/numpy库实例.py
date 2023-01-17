import numpy as np
''' #创建一维数组，所有元素都是同类型的
a=np.array([2,3,4],dtype=np.float64)
print(a) #[2. 3. 4.]
#没有逗号分隔
print(a.dtype) '''


#np.where() 返回值是一个array
# b=np.arange(10)
# b=np.where(a>=5,a*10,a) #条件为单条件
# print(b)

#np.packbits(a,...) 打包成字节，返回值是ndarray

''' #bytes.decode() 将给定字节解码为对应字符串
byte=[72,48,58,68]
bits=np.packbits(byte)
# result=bits.decode(encoding="utf-8",errors="strict")
print(bits)
 '''

#切片操作
ls=np.random.rand(5,3)
print(ls[2])
print(ls[1:3])
print(ls[-5:-2:2])