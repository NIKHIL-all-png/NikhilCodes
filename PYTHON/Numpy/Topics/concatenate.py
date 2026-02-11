import numpy as np
# a=np.random.random(6).reshape(2,3)
a=np.arange(6).reshape(2,3)
print(a)
b=np.arange(6,12).reshape(2,3)
print(b)
print("\n")
print(np.concatenate((a,b),axis=1))