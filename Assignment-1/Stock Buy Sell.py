def stockProfit(A,N):
    profit = 0

    for i in range(1,N):
        if A[i]>A[i-1]:
            profit += A[i]-A[i-1]

    return profit

A = list(map(int,input().split()))
N = int(input())
print(stockProfit(A, N))
