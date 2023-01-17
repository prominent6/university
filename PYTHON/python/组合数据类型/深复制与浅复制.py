#浅复制
a=[1,2,3]
b=a
b[1]=4 
print(a) #[1, 4, 3]

#深复制
c=[1,2,3]
# d=c.copy()
# d=c[:]
d=list(c)
d[1]=4
print(c) #[1, 2, 3]
