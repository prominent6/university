from turtle import color
import numpy as np
import matplotlib
import matplotlib.pyplot as plt
matplotlib.rcParams['font.family']='SimHei'
matplotlib.rcParams['font.sans-serif']=['SimHei']
labels=np.array(['综合','KDA','发育','推进','生存','输出'])
nAttr=6
data=np.array([7,5,6,9,8,7])
angles=np.linspace(0,2*np.pi,nAttr,endpoint=False)
#起点为0，末值为2Π，返回一个两端点间数值平均分布的长为nAttr的数组angles,它表示从一个属性点到下一个属性点笔画需要旋转的角度，也是雷达图的多边形边数

labels = np.concatenate((labels, [labels[0]]))
data=np.concatenate((data,[data[0]]))
angles=np.concatenate((angles,[angles[0]]))

fig=plt.figure(facecolor="white")
#concatenate()用于将数据和角度的数组首尾闭合起来
plt.subplot(111,polar=True) #建立极坐标系的子分区
plt.plot(angles,data,'bo-',color='g',linewidth=2)
plt.fill(angles,data,facecolor='g',alpha=0.25)
plt.thetagrids(angles*180/np.pi,labels)
#为极坐标设置标签
plt.figtext(0.52,0.95,'DOTA能力值雷达图',ha='center')
plt.grid(True)
plt.show()