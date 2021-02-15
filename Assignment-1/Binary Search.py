def searchInSorted(A,N,K):
    l = 0
    r = N-1
    while(l<=r):
        mid = l + (r-l)//2   # (l + r)/2 may cause overflow error
        if(A[mid]==K):
            return 1
        if(A[mid]>K):
            r = mid-1
        else:
            l = mid+1
    return -1

A = [1, 2, 3, 4, 5, 6, 7]
N = len(A)
K = 8
print(searchInSorted(A,N,K))
