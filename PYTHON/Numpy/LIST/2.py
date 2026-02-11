import numpy as np
a=np.arange(10000000)
b=np.arange(10000000,20000000)
import time
start=time.time()
c=a+b

print(time.time()-start)