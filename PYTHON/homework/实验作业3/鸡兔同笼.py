a,b=map(int,input().split(' '))
flat=1
for i in range(min(a,b)):
    if i*2+(a-i)*4==b:
        print(i,a-i)
        flat=0
if flat==1:
    print("Data Error!")