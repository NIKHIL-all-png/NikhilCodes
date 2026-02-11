nums=(1,2,3,4,5,6,7,8,9)
x=4

ind=0
for el in nums:
    if(el==x):
        print("number found at ind :",ind)
        break
    ind+=1    