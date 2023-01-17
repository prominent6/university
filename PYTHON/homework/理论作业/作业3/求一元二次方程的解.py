from math import *
a, b, c = input().split()
a=float(a)
b=float(b)
c=float(c)
discr=pow(b,2)-4*a*c
if discr<0:
    print("No")
elif discr==0:
    x1=x2=-b/(2*a)
    print("{:.2f} {:.2f}".format(x1,x2))
else:
    x1=(-b+sqrt(discr))/(2*a)
    x2=(-b-sqrt(discr))/(2*a)
    print("{:.2f} {:.2f}".format(x1,x2))