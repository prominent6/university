#sort()和sorted()
''' ls=[2,5,7,1,6]
a=ls.sort() #从小到大
print(ls)

ls.sort(reverse=True) #从大到小
print(ls)

a=sorted(ls)
print(a)

b=sorted(ls,reverse=True)
print(b)
 '''

#zip() 两两打包
''' x=[1,2,3]
y=[4,5,6]
zipped=zip(x,y)
print(*zipped) #(1, 4) (2, 5) (3, 6)
 '''

#bytearray() 返回给定字节数的bytearray对象
print(bytearray(5)) #bytearray(b'\x00\x00\x00\x00\x00')
print(bytearray(range(5))) 
#bytearray(b'\x00\x01\x02\x03\x04')
