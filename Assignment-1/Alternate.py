arr = list(map(int,input().split()))
arr.sort()
i = 0
j = len(arr)-1
while(i<j):
    print(arr[j], end=" ")
    j-=1
    print(arr[i], end=" ")
    i+=1
if(len(arr)%2!=0):
    print(arr[i])
