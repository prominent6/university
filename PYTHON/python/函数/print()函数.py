#print(*objects, sep=' ', end=' ', file=sys.stdout)
#sep -- 用来间隔多个对象。
#end -- 用来设定以什么结尾。默认值是换行符 ，我们可以换成其他字符。

#print(a, b) #可以一次输出多个对象，对象之间用逗号分隔
#如果直接输出字符串，而不是用对象表示的话，可以不使用逗号,不添加逗号分隔符，字符串之间没有间隔

#实现数据的格式化输出
s='Duan Yixuan'
x=len(s)
print('The length of %s is %d' %(s,x))
#'The length of %s is %d' 这部分叫做：格式控制符,(s,x) 这部分叫做：转换说明符,% 字符，表示标记转换说明符的开始