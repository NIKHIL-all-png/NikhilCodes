#using zip
days=["Sunday","monday","Tuesday","Wednesday","Thursday","Friday","Saturday"]
temp_C=[30,32,34,33,31,29,28]
print({i:j for i,j in zip(days,temp_C)})