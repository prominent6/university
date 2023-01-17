n=int(input())
ls=list()
def fenjie(n):
    for i in range(2,n+1):
        while n!=i:
            if n%i==0:
                ls.append(i)
                n/=i
                # i=i-1
            else:
                break
        else:     
            #没有这一步相等时直接跳出了，就没打印到
            ls.append(i) 
    print(ls)
fenjie(n)