#split()   
w="I am good at programming".split()
print(w)

#字符串的连接方式
#1. str1+str2
#2. join()
str1="one"
list1=["a","b","c"]
tuple1=("H","I","J")
str1.join(list1) #'aonebonec'
str1.join(tuple1) #'HoneIoneJ'

#join还有一个妙用，就是将所有list或tuple中的元素连接成string类型并输出
list1=['a', 'b', 'c']
"".join(list1) #'abc'
type("".join(list1)) #<type 'str'>


#修改字符串的值，将字符串——>列表