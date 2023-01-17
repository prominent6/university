import numpy as np
waves = np.array([0,4,0.1,0.2,5,0.3,0.4,0.5,
0.1,3.1,3.2,0.2,0.3,3.3,0.4,3.4,
0.2,3.1,3.2,0.3,3.3,3.4,0.4,0.5,
0.3,3.1,3.2,0.3,3.3,3.4,0.4,0.5,
0.4,3.1,3.2,0.5,3.3,3.4,3.5,3.6,
0.5,0.6,3.1,0.7,0.8,0.9,1,3.1
])
bits_array=np.where(waves>=3,1,0)
bits=np.packbits(bits_array)
# result=bits.decode()
# print(result)
print(bits)