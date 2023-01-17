import numpy as np
import matplotlib.pyplot as plt #
n=1000
num=np.random.randint(0,2,size=n)
steps=np.where(num>0,1,-1)
walks=steps.cumsum()
plt.plot(walks[:100])
plt.show()