num=int(input("Please input a positive integer:(3<=n<=1000)\n"))
# 质数大于1
def isZhishu(n):
    for i in range(2,n):
        if n%i==0:
            return False
    return True
def main():
    # 版本1
    ''' count=0.0
    for i in range(1,num):
        for j in range(1,num):
            if isZhishu(i) and isZhishu(j) and (i+j==num):
                if i==j:
                    count=count+1
                elif i!=j:
                    count=count+0.5 '''
    # 版本2
    ''' count=0
    for i in range(2,num):
        for j in range(2,num):
            if isZhishu(i) and isZhishu(j) and (i+j==num) and i<=j:
                count+=1
    print(count) '''

    # 版本3
    count=0
    for i in range(2,num//2+1):
        if isZhishu(i) and isZhishu(num-i):
            count+=1
    print(count)
main()
