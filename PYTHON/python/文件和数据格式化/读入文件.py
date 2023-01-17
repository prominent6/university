#\\
# textFile=open(r"C:\\Users\\zsyub\\Desktop\\python\\文件和数据格式化\\text.txt","rt") 
textFile=open("C:\\Users\\zsyub\\Desktop\\python\\文件和数据格式化\\test.txt","rt")
#t表示文本文件方式
print(textFile.readline())
textFile.close()
binFile=open("C:\\Users\\zsyub\\Desktop\\python\\文件和数据格式化\\text.txt","rb") 
#r表示二进制文件方式
print(binFile.readline())
binFile.close()
