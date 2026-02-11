import numpy as np
a1=np.random.randint(1,100,12).reshape(3,4)
print(a1)
# print(a1>50)
# print(a1[a1>50])
print(a1[a1%2==0])