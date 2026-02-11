import numpy as np
a4=np.arange(12).reshape(3,4)
a5=np.arange(12,24).reshape(3,4)
# print(np.vstack((a4,a5)))
print(a4)
print(np.vsplit(a4,3))