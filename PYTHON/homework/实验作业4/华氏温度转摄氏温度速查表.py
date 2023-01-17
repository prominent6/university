def F2C(F):
    return 5*(F-32)/9
def Print(f):
    print("{} : {:.2f}".format(f,F2C(f)));
f1,f2=map(int,input().split(","))
if f1>f2:
    print("error");
else:
    for i in range(f1,f2+1,2):
        Print(i);