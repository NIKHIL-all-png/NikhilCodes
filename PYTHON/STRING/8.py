s=input('Enter the string')

for i in s.split():
    print(i[0].upper() +i[1:].lower())