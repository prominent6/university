n=int(input())
n1=n%10
print({})
n2=n%100/10
n3=n%1000/100
n4=n/1000%10
n5=n/10000
N=n5+n4*10+n3*100+n2*1000+n1*10000
if N==n:
    print("yes!")
else:
    print("no!")