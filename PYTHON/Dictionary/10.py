products={'phone':10,'laptop':0,'charger':32,'tablet':0}
print({key:value for (key,value) in products.items() if value>0})