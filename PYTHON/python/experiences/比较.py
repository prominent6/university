#列表之间的比较, collections.Counter（）方法
import collections
ls1=[30,1,2,0]
ls2=[1,21,133]
if collections.Counter(ls1)==collections.Counter(ls2):
    print("the same");
else:
    print("not the same")

#sort（）方法
ls1.sort()
print(ls1) #[0, 1, 2, 30]
''' ls2.sort()
if ls1==ls2:
    print("the same");
else:
    print("not the same") '''

#set()方法
a=set(ls1)
print(a) #{0, 1, 2, 30}
''' b=ls2.sort()
if ls1==ls2:
    print("the same");
else:
    print("not the same") '''

