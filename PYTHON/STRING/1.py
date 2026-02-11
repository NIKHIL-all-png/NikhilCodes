# curr_pop=10000
# for i in range(10,0,-1):
#     print(i,curr_pop)
#     curr_pop=curr_pop/1.1

n=int(input('Enter n'))
result=0
fact=1
for i in range(1,n+1):
    fact=fact*i
    result=result+i/fact

print(result)    