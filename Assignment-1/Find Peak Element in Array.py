def peakElement(A, n): # in case of multiple peeks it finds any peak and returns its index
    l = 0
    r = n-1
    while(l<=r):
        mid = l + (r-l)//2
        if(A[mid]>A[mid-1] or mid==0):
            peak = mid
            l = mid+1
        else:
            r = mid-1
    return peak

A = list(map(int,input().split()))
n = len(A)
print("Index of the peak element is : " ,peakElement(A, n))
