# %
astr='I love %s and %s' %('Python','JAVASCRIPT');
print(astr);

bstr='I am %(name)s,and I am %(age)d years old' %{'name':'xiaosu','age':18};
print(bstr); 

# list推导/解析
alist=[1,2,3,4];
print([x*2 for x in alist]);
# 对list解析并不改变原始的list
print(alist); 
alist=[x*2 for x in alist];
print(alist); 

# 陷阱
a=('abc');
type(a);  #字符串
b=('abc',)
type(b);  #元组

#构造字典
# 1.zip()
bdict=dict(zip(['name','age'],['xiaosu',18]))
print(bdict);
#2.
adict={'name':'xiaosu','age':18}
#3.dict()
cdict=dict(x=1,y=2)
#3.copy()
edict=cdict.copy()

print(adict)
print(adict['name'])
#修改key
adict['name']='xiaolan'
print(adict['name'])
#新增key
adict['sex']='girl'
print(adict)
#新增
adict[40]='jiayou'
print(adict)
#删除
del adict[40]
print(adict)

#字典的遍历
bdict=dict(zip(['name','age'],['xiaosu',18]))
for key in bdict:
    print(key,bdict[key])

#方法的使用 update()、
aDict={'a':1,'b':2}
bDict={'a':10,'x':100,'y':101}
aDict.update(bDict)
print(aDict)
#fromkeys()构造对象，值均为 True
cDict={}.fromkeys(('m','n'),True)
print(cDict)
#setdefault()添加一个新的项，键为'z',值为空字典{}，并为值添加一个元素'x'：3
cDict.setdefault('z',{})['x']=3
#setdefault()添加一个新的项，键为'h',值为空列表[]，并为这个列表添加一个新元素'x'
cDict.setdefault('h',[]).append('x')
print(cDict)

#方法的使用
#1.key()获取字典的key列表
keylist=cDict.keys()
print(keylist) #dict_keys(['m', 'n', 'z', 'h'])  
#2.values()获取字典的值列表
valuelist=cDict.values()
print(valuelist) #dict_values([True, True, {'x': 3}, ['x']])
#3.items()获取字典的键值的tuple列表
itemlist=cDict.items()
print(itemlist) #dict_items([('m', True), ('n', True), ('z', {'x': 3}), ('h', ['x'])])
 
#enumerate函数+next()
e=enumerate(cDict)
next(e)
# next(e);
# next(e);
# next(e);

#字典的解析
#1.
some_list=[1,2,3,4,5]
another_list=[x+1 for x in some_list]
print(another_list)
#2.
eDict={x:x%2==0 for x in range(0,10)}
print(eDict)


#集合
#使用列表构造一个集合 set()
alist=list(range(0,5))
print(alist)  #[0, 1, 2, 3, 4]
aset=set(alist)
print(aset)  #{0, 1, 2, 3, 4}

#交换两个变量的值
a=7
b=8
a,b=b,a
print(a,b)