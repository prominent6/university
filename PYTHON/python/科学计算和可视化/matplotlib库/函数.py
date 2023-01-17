import matplotlib
import matplotlib.pyplot as plt
import numpy as np


#为正确显示中文字体
matplotlib.rcParams['font.family']='SimHei'
matplotlib.rcParams['font.sans-serif']=['SimHei']


''' #绘图区域函数
#创建一个全局绘图区域 
#参数多，采用指定参数名称的方式 figsize=指定绘图区域的宽度和高度(8,4)
#也会自动创建
plt.figure(figsize=(8,4)) 

#在全局绘图区域内创建子绘图区域 
#参数：nrows行 ncols列 在plot_number位置生成坐标系
#axes()默认创建(111)
plt.subplot(324)

#创建一个坐标系风格的子绘图区域 
# 第一个参数四个变量的范围为[0,1) 第二个参数为背景色
plt.axes([0.1,0.1,0.7,0.3],fc='y')
 '''

''' # 读取和显示函数 '''


''' #基础图表函数
#绘制直/曲线
# plt.plot(x,y,label,color='r',linewidth=3,linestyle='dotted')
#第三个参数为颜色,k-黑色，b-蓝色，第四个参数为样式
#label设置标签 字符串前后添加"$"符号
x=np.linspace(0,6,100)
y=np.cos(2*np.pi*x)*np.exp(-x)+0.8
plt.plot(x,y,'k',color='r',linewidth=3,linestyle='-')
# 绘制基本的三角函数
 '''

''' #坐标轴设置函数实例
plt.plot=([1,2,4],[1,2,3])
plt.axis() #获得当前坐标值范围
plt.axis([0,5,0,8]) #[xmin,xmax,ymin,ymax]

#设置横纵坐标
plt.xticks([0, 2, 4, 6, 8, 10, 12])
plt.yticks([0, 5, 10, 15, 20, 25])
 '''

# 标签设置函数实例
plt.plot([1,2,4],[1,2,3])
plt.title("坐标系标题")
plt.xlabel('时间(s)')
plt.ylabel('范围(m)')
plt.xticks([1,2,3,4,5],[r'$\pi/3$',r'$2\pi/3$',r'$\pi$',r'$4\pi/3$',r'$5\pi/3$'])

''' 
#区域填充函数的实例——带局部阴影的坐标系
x=np.linspace(0,10,1000)
y=np.cos(2*np.pi*x)*np.exp(-x)+0.8
plt.plot(x,y,'k',color='r',label='$exp-decays$',linewidth=3)
plt.axis([0,6,0,1.8])
ix=(x>0.8)&(x<3)
plt.fill_between(x,y,0,where=ix,facecolor='grey',alpha=0.25)
plt.text(0.5*(0.8+3),0.2,r"$\int_a^b f(x)\mathrm{d}x$",horizontalalignment='center')
plt.legend() #使得plot()里的label参数出现 '''

#show()才会有图
plt.show()


