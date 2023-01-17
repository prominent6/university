import random
import matplotlib
import matplotlib.pyplot as plt
import numpy as np


''' #散点图
plt.xticks(np.linspace(-20,30,6))
plt.yticks(np.linspace(-30,20,6))
x0=[]
y0=[]
for i in range(100):
    x0.append(random.randint(-20,30))
    y0.append(random.randint(-30,20))
plt.scatter(x0,y0)
plt.title('Simple Scatter')
plt.show()
 '''

''' #折线图
plt.xticks(np.linspace(1,4,7))
plt.yticks(np.linspace(20,100,7))
x0=[1,2,3,4]
y0=[10,50,25,100]
plt.xlabel('date')
plt.ylabel('number')
plt.title('polyline chart')
plt.plot(x0,y0,linewidth=1,color="red",marker="*",label="a") #marker
plt.legend()
plt.show() '''


''' #直方图,第一个参数传入数据
plt.xticks(np.linspace(60,140,5))
plt.yticks(np.linspace(0,12,5))
plt.title('Histogram')
y0=[]
for i in range(150):
    y0.append(random.randint(30,145))
plt.hist(y0,bins=20)
plt.show()
 '''

#饼状图
labels=['Frogs','Logs','Dogs','Hogs']
values=np.array([15,10,45,30])
#counterclock默认情况下为True 
#autopc 显示百分比
plt.pie(values,labels=labels,startangle=90,counterclock=False,explode=[0,0,0,0.1],autopct='%.1f%%')
plt.show()