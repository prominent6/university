import numpy as np
def main():
    arr=input("")
    a=[float(x) for x in arr.split()]
    a=np.array(a)
    print(np.sort(a,axis=0))
main()