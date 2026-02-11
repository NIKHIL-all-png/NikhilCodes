def cal_fact(n):
    fact=1
    for i in range(1,n+1):
        fact*=i
        i+=1
    print(fact)
cal_fact(4)            