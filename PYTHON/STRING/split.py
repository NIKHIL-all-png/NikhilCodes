s=input('Enter the string')
L=[]
temp=''
for i in s:
    if i != '':
        temp=temp+i
    else:
        L.append(temp)
        temp=''
L.append(temp)
print(L)