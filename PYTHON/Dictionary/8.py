distances={'delhi':1000,'mumbai':2000,'chennai':3000}
print({key:value*.62 for (key,value) in distances.items()})