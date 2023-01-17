from random import random
import time
import numpy as np
a=[random() for i in range(100000000)]
t1=time.time() 
''' sum1=sum(a)
t2=time.time()
print(t2-t1) #计算sum1所需时间  0.6090004444122314
 '''

b=np.array(a)
sum2=np.sum(b)
t4=time.time()
print(t4-t1) #计算sum2所需时间 5.6312947273254395