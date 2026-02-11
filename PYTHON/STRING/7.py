s=input('Enter thr email')
term=input('What would like to search for')

counter =0
for i in s:
    if i==term:
        counter+=1

print('Frequency ',counter)
