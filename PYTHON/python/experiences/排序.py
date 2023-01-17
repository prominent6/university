#sort()和sorted()
ls=[2,5,7,1,6]
a=ls.sort() #从小到大
print(ls)

ls.sort(reverse=True) #从大到小
print(ls)

a=sorted(ls)
print(a)

b=sorted(ls,reverse=True)
print(b)



#字典
s={1:8.7,2:8.2,3:7.6,4:9.3,5:7.1,6:9.6,7:8.8,8:7.5}
print(s[1])
print(sorted(s.items(),key=lambda rule:rule[1],reverse=True))
#[(6, 9.6), (4, 9.3), (7, 8.8), (1, 8.7), (2, 8.2), (3, 7.6), (8, 7.5), (5, 7.1)]

for i in sorted(s.items(),key=lambda rule:rule[1],reverse=True):
    print(i)
''' (6, 9.6)
(4, 9.3)
(7, 8.8)
(1, 8.7)
(2, 8.2)
(3, 7.6)
(8, 7.5)
(5, 7.1) '''