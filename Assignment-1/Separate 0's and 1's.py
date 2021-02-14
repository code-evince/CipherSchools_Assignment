def separate(arr, size):

    zero = 0
    ones = size - 1

    while(zero < ones):
        if(arr[zero] == 1):
            (arr[zero],
             arr[ones]) = (arr[ones],
                            arr[zero])
            ones -= 1
        else:
            zero += 1

# Driver Code
arr = [0, 1, 0, 1, 1, 1,0,0]
arr_size = len(arr)
separate(arr, arr_size)
print(arr)
