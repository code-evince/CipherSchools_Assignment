def majorityWins(arr, n,  x,y):
    countx,county=0,0
    for i in range(n):
        if(arr[i]==x):
            countx+=1
        if(arr[i]==y):
            county+=1

    if(countx==county):
        return min(x,y)
    elif(countx>county):
        return x
    else:
        return y

n=int(input())
arr=[int(x) for x in input().strip().split()]
x,y=map(int,input().strip().split())
print(majorityWins(arr,n,x,y))
