fname=input("请输入要打开的文件")
#test.txt 该文件在该层目录外
fo=open(fname,"r")
#先读入列表，列表的每个元素是文件每一行的内容，
#然后通过for-in 遍历列表
#一次性全部内容
''' for line in fo.realines():
    print(line) '''
#所有行,逐行处理文件内容
for line in fo:
    print(line) #该代码用于处理一行数据
fo.close()
