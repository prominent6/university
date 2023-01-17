#daterime类
from datetime import datetime
now=datetime.now()
w=now.strftime("%Y-%m-%d")
print(w) #2022-03-17
y=now.strftime("%A,%d.%B %Y %I:%M%p")
print(y) #Thursday,17.March 2022 10:57PM
print("今天是{0:%Y}年{0:%m}月{0:%d}日".format(now))
#今天是2022年03月17日