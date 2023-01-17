dict={"a":2}
pwd=input()
num=list()
# index=0
# print(ord("g")-ord("a")) //6

for i in pwd:
    if ord(i)<ord("0") or ord(i)>ord("9"):
        if i=='a':
            num.append(int(dict.get(i)))
        elif i not in dict:
            num.append(int((ord(i)-ord("a")))//3+2)
        # index=index+1
    else:
        num.append(int(i))
        # index=index+1
for i in num:
    print(i,end='')


# list assignment index out of range
''' for i in pwd:
    if ord(i)<ord("0") or ord(i)>ord("9"):
        if i=='a':
            num[index]=int(dict.get(i))
        elif i not in dict:
            num[index]=int((ord(i)-ord("a")))//3+2
        index=index+1
    else:
        num[index]=int(i)
        index=index+1
for i in num:
    print(i,end='') '''