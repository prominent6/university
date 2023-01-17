def f(n,a):
    if n==1:
        return a
    else:
        return 10*f(n-1,a)+a
def g(n,a):
    if n==1:
        return a
    else: return g(n-1,a)+f(n,a)
def main():
    n,a=eval(input().split(','))
    print(g(n,a))
main()
