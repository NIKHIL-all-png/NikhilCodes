import numpy as np
actual=np.random.randint(1,50,25)
predicted=np.random.randint(1,50,25)
print(predicted)
print(actual)
def mse(actual,predicted):
    return np.mean((actual-predicted)**2)
print(mse(actual,predicted))