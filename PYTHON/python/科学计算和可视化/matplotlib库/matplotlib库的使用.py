import matplotlib
import matplotlib.pyplot as plt
import numpy as np

#format_string:控制曲线的格式字符串

x=np.linspace(-3,3,50) #x,y 为区间
y1=2*x+1

#抛物线
# plt.figure() #画布
# plt.plot(x,y1)
# # plt.scatter(x,y1) #使得点分散开
# y2=x**2
# plt.figure(num=3)
# plt.plot(x,y2,color="r",linewidth=3,linestyle="--")

#刻度问题
plt.figure(figsize=(9,5))
plt.xlim(-2,2)
plt.ylim(-2,4)
plt.xlabel('I am X')
plt.ylabel('I am Y')
myticks=np.linspace(-2,2,5)
plt.xticks(myticks)
plt.yticks([-1,0,1,2,3],['really bad','bad','normal','good','really good'])
plt.plot(x,y1)
plt.show()

#spines()
#axes.spines['key'] key=left/top/right/bottom来获取axes中单个坐标对象
axes=plt.gca() #get current axes
#.set_color/.set_visible
# .set_position(self,position) ,position=(position type,amount)定义，position type=outward/axes/data设置坐标轴位置
#特殊 
