import numpy as np
a3=np.arange(27).reshape(3,3,3)
for i in np.nditer(a3):
    print(i)