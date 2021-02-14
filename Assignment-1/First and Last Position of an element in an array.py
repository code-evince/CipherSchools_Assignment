def LeftMost(arr, x, n):
    low = 0
    high = n - 1
    res = -1
    while (low <= high):
        #Binary Search
        mid = (low + high) // 2

        if arr[mid] > x:
            high = mid - 1
        elif arr[mid] < x:
            low = mid + 1

        else:
            res = mid
            high = mid - 1

    return res

def RightMost(arr, x, n):

    low = 0
    high = n - 1
    res = -1

    while(low <= high):

        # Normal Binary Search Logic
        mid = (low + high) // 2

        if arr[mid] > x:
            high = mid - 1
        elif arr[mid] < x:
            low = mid + 1

        else:
            res = mid
            low = mid + 1

    return res


arr = [ 1, 8, 2, 5, 2, 4, 4, 7, 8, 8 ]
n = len(arr)
x = 4

print("LeftMost Occurrence =", LeftMost(arr, x, n))
print("RightMost Occurrence =", RightMost(arr, x, n))
