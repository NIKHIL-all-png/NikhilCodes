import numpy as np
def sigmoid(array):
    return 1/(1+ np.exp(-(array)))

a=np.arange(100)
print(a)
b=sigmoid(a)
print(b)