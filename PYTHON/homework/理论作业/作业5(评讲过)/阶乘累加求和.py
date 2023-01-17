from math import *
n=int(input())
def add(n):
    sum=0
    if n==0:
        sum=1
    else:
        for i in range(1,n+1):
            sum=sum+factorial(i)
    # return string(sum)
    return sum
def main():
    print(add(n))
main()