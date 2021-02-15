def max_subarray(A):
    best_sum = A[0]  # or: float('-inf')
    current_sum = A[0]
    for i in range(1,len(A)):
        current_sum = max(A[i], current_sum + A[i])
        best_sum = max(best_sum, current_sum)
    return best_sum

A = list(map(int,input().split()))
print(max_subarray(A))
