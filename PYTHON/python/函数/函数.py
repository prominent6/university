''' #可变参数，被当作元组类型进行传递
def vfunc(a,*b):
    for n in b:
        a+=n
    return a
print(vfunc(1,2,3,4,5)) #15

#参数指定默认值，放在最右边
def dup(str,times=2):
    print(str*times)
dup("fighting~") #fighting~fighting~

#按照形参名称输入实参的方式
result=function(x2=4,y2=5)

#return返回多值以元组类型保存
 '''

''' def interset(*setlist):
    res=[]
    # print(setlist)
    #([1, 2, 3, 4, 5], [1, 2, 7, 8, 9], [1, 5, 7, 9, 10])
    # print(setlist[0]) #[1, 2, 3, 4, 5]
    # print(setlist[1:]) 
    #([1, 2, 7, 8, 9], [1, 5, 7, 9, 10])
    for x in setlist[0]:
        for otherlist in setlist[1:]:
            if x in otherlist:
                print(x)
    for x in setlist[0]:
        for otherlist in setlist[1:]:
            if x not in otherlist:
                break
        else:
            res.append(x)
    return res
alist=[1,2,3,4,5]
blist=[1,2,7,8,9]
clist=[1,5,7,9,10]
print(interset(alist,blist,clist)) #[1] '''

#被当作字典形式传递
#调用函数时，额外的参数必须以“名字=值”的方式出现
''' def vardict(arg1,arg2='abcdef',**therast):
    print("arg1:",arg1)
    print("arg2:",arg2)
    for x in therast.keys():
        print('Extra args %s:' %x,therast[x])
vardict(1,100,a=1,adict={1:1},alist=[1,2],astr='aaa')
 '''

#python函数不支持重载 （？） 

#内嵌函数