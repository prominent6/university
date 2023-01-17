#花括号中的数字表示传递给 str.format() 方法的对象所在的位置。
# print('We are the {1} who are "{0}!"'.format('knights','ni'))

#使用关键字参数名引用值
# print('This {food} is {adjective}.'.format(food='spam', adjective='absolutely horrible'))

#下面的代码生成一组整齐的列，包含给定整数及其平方与立方
for x in range(1,11):
    print('{0:2d} {1:3d} {2:4d}'.format(x,x*x,x*x*x))