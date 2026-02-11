s=input('Enter a String')
L=[]
temp=''
for i in s:
    if i!=' ':
        temp=temp+i
      
    elif i==' ':
        L.append(temp)
        temp=''
L.append(temp)
print(L)