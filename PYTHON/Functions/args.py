def multiply(*salman):
    product=1
    for i in salman:
        product=product*i
    print(salman) 
    print(type(salman))   
    return product    

print(multiply(2,3,4))
print(multiply(1,2,3,4,5,6,1,3,4,5,6,7,8,7,5,2,3,4,5,6,7,8,7,6,5,))
print(print.__doc__)