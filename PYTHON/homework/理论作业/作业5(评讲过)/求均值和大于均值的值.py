#有星号为可变参数，被当作元组类型进行传递，麻烦系数递增
''' def cacluate(*n):
    for i in n:
        print(i)
        print(i[0])
    # print(n)
cacluate((input("Please input numbers,and press the Enter to end.(gap with  )").split(','))) '''


''' def cacluate(args):
    ave=sum(args)/len(args)
    lst=[]
    for i in args:
        if i>ave:
            lst.append(i)
    return ave,lst
print(cacluate(eval(input("Please input numbers,and press the Enter to end.(gap with ,)\n"))))
# print(cacluate(1,2,3,4,5)) '''

def calc():
    l=input().split(',')
    print(l) #['1', '2', '3', '4', '5']
    l=[int(i) for i in l] #列表推导式 将字符数组转化为整数数组
    print(l) #[1, 2, 3, 4, 5]
    avg=sum(l)/len(l)
    greater=[i for i in l if i>avg] #
    ret=tuple([avg,greater])
    return ret
calc()