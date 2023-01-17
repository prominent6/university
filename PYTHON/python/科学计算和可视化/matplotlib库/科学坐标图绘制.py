import numpy as np
import matplotlib.pyplot as plt
import matplotlib
matplotlib.rcParams['font.family']='SimHei'
matplotlib.rcParams['font.sans-serif']=['SimHei']
x=np.linspace(0.0,6.0,100)
y=np.cos(2*np.pi*x)*np.exp(-x)+0.8
z=0.5*np.cos(x**2)+0.8

note_point,note_text,note_size=(1,np.cos(2*np.pi)*np.exp(-1)+0.8),(1,1.4),14
fig=plt.figure(figsize=(8,6),facecolor="white")
plt.subplot(111)

plt.plot(x,y,'k',label="&exp_decay",color="red",linewidth=3,linestyle="-")
plt.plot(x,z,"b--",label="$cos(x^2)$",linewidth=1)
plt.xlabel('时间(s)')
plt.ylabel('幅度(mV)')
plt.title("阻尼衰减曲线绘制")
plt.annotate('$\cos(2 \pi t)\exp(-t)$',xy=note_point,xytext=note_text,fontsize=note_size,arrowprops=dict(arrowstyle='->',connectionstyle="arc3,rad=.1"))
plt.xlim(0,5)
plt.ylim(0,1.8)
plt.xticks([1,2,3,4,5],['$\pi/3$','$2\pi/3$','$\pi$','$4\pi/3$','$5\pi/3$'])

ix=(x>0.8)&(x<3)
plt.fill_between(x,y,0,where=ix,facecolor='grey',alpha=0.25)
plt.text(0.5*(0.8+3),0.2,r"$\int_a^b f(x)\mathrm{d}x$",horizontalalignment='center')
plt.legend()
plt.show()