def getMissingNo(a, n):
    total_sum=n*(n+1)//2
    return total_sum-sum(a)


a = [1, 2, 4, 5, 6]
n = len(a)+1
miss = getMissingNo(a, n)
print(miss)

    
