''' #从A 借助C 到B
cout=0
def hant(n,fromm,by,to):
    if n==1:
        move(n,fromm,to)
    else:
        hant(n-1,fromm,to,by)
        move(n,fromm,to)
        hant(n-1,by,fromm,to)
def move(n,fromm,to):
    global cout
    cout=cout+1
    print("[STEP{:>4}] {}->{}\n".format(cout,fromm,to))
def main():
    n=int(input())
    hant(n,'A','B','C')
main() '''

#从A 借助C 到B
cout=0
def hant(n,fromm,by,to):
    if n==1:
        move(n,fromm,to)
    else:
        hant(n-1,fromm,to,by)
        move(n,fromm,to)
        hant(n-1,by,fromm,to)
def move(n,fromm,to):
    global cout
    cout=cout+1
    print("[STEP {}]{}->{}\n".format(cout,fromm,to))
def main():
    n=int(input())
    print("输入：\"{}\"".format(n))
    print("输出：\"")
    hant(n,'A','B','C')
    print("\"")
main()