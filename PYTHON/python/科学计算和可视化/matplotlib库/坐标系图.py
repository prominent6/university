import numpy as np
import matplotlib.pyplot as plt

x=np.linspace(-3,3,50) #x,y 为区间
y=2*x+1
plt.figure(figsize=(9,5))
plt.xlim(-2,2)
plt.ylim(-2,4)
plt.plot(x,y)

axes=plt.gca() #get current axes
#让坐标轴消失的方法
axes.spines['top'].set_color('none')
axes.spines['right'].set_visible(False)

#设置坐标轴位置
axes.spines['left'].set_position('zero')
axes.spines['bottom'].set_position(('data',0.0))

x0=1
y0=2*x0+1
#使得点分散开
plt.scatter(x0,y0,linewidth=6)
plt.plot([x0,x0],[y0,0],'--',linewidth=3) #画一条垂直于x轴的虚线
#标注文字
plt.annotate('$2 * x + 1 = 3$',xy=(x0,y0),xytext=(+30,-30),textcoords='offset points',fontsize=10,arrowprops=dict(arrowstyle='->',connectionstyle='arc3,rad=.2'))
plt.show()