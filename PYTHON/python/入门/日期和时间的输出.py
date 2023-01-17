from datetime import datetime #引用datetime库
now=datetime.now()
print(now)
now.strftime("%x")  #输出其中的日期部分
now.strftime("%X")  #输出其中的时间部分