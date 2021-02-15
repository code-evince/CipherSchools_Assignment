def BinarySearch(A,k):
    n = len(A)
    l = 0
    r = n-1
    ans = -1
    while(l<=r):
        mid = l + (r-l)//2
        if(A[mid]==k):
            ans = mid
        if(A[mid]<k):
            l = mid+1
        else:
            r = mid-1
    print("Binary Search Ans : ", ans)
    return ans

def sortedRotated(A,k):
    n = len(A)
    l = 0
    r = n-1
    ans = -1
    last = A[n-1]
    while(l <= r):
        mid = l + (r-l)//2
        if(A[mid]>last):
            ans = mid
            l = mid+1
        else:
            r = mid-1

    firstHalf = A[0:ans+1]
    secondHalf = A[ans+1:n]
    print(firstHalf)
    print(secondHalf)
    m = BinarySearch(firstHalf, k)
    n = BinarySearch(secondHalf, k)
    if n!=-1 :
        n = n+ len(firstHalf)

    return  max(m,n)

A = list(map(int,input().split()))
k = int(input())
print(sortedRotated(A, k))
