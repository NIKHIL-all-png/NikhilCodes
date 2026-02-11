nums=(1,2,3,4,5,6,7,)
i=0
x=6
while i<len(nums):
    if(x==nums[i]):
        print("Found at ind",i)
        break
    else:
        print("Finding")
    i+=1