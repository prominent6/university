def mul(arg):
    chengji=1
    for i in arg:
        chengji*=i
    return chengji
print(mul(eval(input())))


def mul(m,*n):
    p=m
    for i in n:
        p*=i
    return p
print(eval("product({})".format(input())))