import numpy as np
a2=np.arange(12).reshape(3,4)
print(a2)
print(a2[:,2])
print(a2[::2,::3])
print(a2[::2,1:4:2])
print(a2[::2,1::2])
print(a2[1:2,::3])
