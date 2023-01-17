coins=input().split(',')
coins=[int(i) for i in coins]
def weightcal(coins,start,end):
    sum=0
    for i in range(start,end+1):
        sum+=coins[i]
    return sum
def findFalseCoin(coins,start,n):
    if (n-start)==2:
        if coins[start]<coins[start+1]:
            print("Fake coin:{}".format(start))
            # print(1)
            return
        elif coins[start]>coins[start+1]:
            print("Fake coin:{}".format(start+1))
            # print(2)
            return
    if (n-start)%2==0:
        left=weightcal(coins,start,start+(n-start)//2-1)
        right=weightcal(coins,start+(n-start)//2,n-1)
        if left==right:
             print("Fake coin is not found")
             return
        elif left<right:
            findFalseCoin(coins,start,n//2)
        else:
            findFalseCoin(coins,n//2,n)
    else:
        left=weightcal(coins,start,n//2-1)
        right=weightcal(coins,n//2+1,n-1)
        if left==right:
            print("Fake coin:{}".format(n//2))
            # print(3)
            return
        elif left<right:
            findFalseCoin(coins,start,n//2)
        else:
            findFalseCoin(coins,n//2+1,n)
findFalseCoin(coins,0,len(coins))

