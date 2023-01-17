fname=input("请输入要写入的文件")
fo=open(fname,"w+")
ls=["one","two","three"]
fo.writelines(ls)  
fo.seek(0) 
#当前文件操作的指针在写入内容的后面
#该语句用于将文件操作指针返回到文件开始
for line in fo:
    print(line)
fo.close()