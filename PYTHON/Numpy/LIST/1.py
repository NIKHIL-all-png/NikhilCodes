a=[i for i in range(10000000)]
b=[i for i in range(10000000,20000000)]
c=[]
 
import time
print(time.time())  
start=time.time()
for i in range(len(a)):
    c.append(a[i]+b[i]) 
    
print(time.time())   
print(time.time()-start)
