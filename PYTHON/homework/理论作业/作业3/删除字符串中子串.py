''' s=input()
c=input()
flag=1
while flag==1:
    flag=0
    if c in s:
        s=s.replace(c,'')
        flag=1
print(s) '''

s=input()
c=input()
print(s.replace(c,''))