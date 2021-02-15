arr = list(map(int,input().split()))
sum = int(input())

def sumSet(arr,sum,index=len(arr)):
    if(index == 0):
        if(sum==0):
            return 1
        else:
            return 0


    return sumSet(arr, sum, index-1)+sumSet(arr, sum-arr[index-1], index-1)

print(sumSet(arr, sum))
