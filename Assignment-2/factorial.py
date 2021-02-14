def fact(n,val=1):
    if(n==0):
        return val
    return fact(n-1,n*val)

print(fact(4))
