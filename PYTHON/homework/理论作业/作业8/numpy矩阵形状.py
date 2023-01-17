import numpy as np
def main():
    a=[1,2,3,4,5,6,7,8,9,10,11,12]
    n,m=map(int,input().split())
    a=np.array(list(a))
    if n*m==12:
        a=a.reshape(n,m)
        print(a)
    else:
        print("NO")
main()