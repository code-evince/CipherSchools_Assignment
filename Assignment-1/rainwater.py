def rainwater(A,N): #⭐⭐⭐
    water=0
    lmax = [0 for i in range(0,N)]
    rmax = [0 for i in range(0,N)]
    for i in range(1,N):
        lmax[0]=A[0]
        lmax[i]=max(A[i],lmax[i-1])
    for i in range(N-2,-1,-1):
        rmax[N-1]=A[N-1]
        rmax[i]=max(A[i],rmax[i+1])
    for i in range(1,N-1):
        water+=min(rmax[i],lmax[i])-A[i]
    print(lmax,rmax)
    return water


A = list(map(int,input().split()))
N = int(input())
print(rainwater(A, N))
