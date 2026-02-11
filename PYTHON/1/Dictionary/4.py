collection=set() # empty dictionary
collection.add(1)
collection.add(2)
collection.add(2)
collection.remove(2)
collection.add((1,2,3,1))
print(len(collection))
print(collection)

collection.clear()
print(len(collection))
print(collection)
