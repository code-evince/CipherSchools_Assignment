def placeQueen(board,i):

    if(i==len(board)):    #then print the board
        for i in range(len(board)):
            for j in range(len(board[0])):
                print( board[i][j], end=" ")
            print()
        return True

    for k in range(len(board[0])):
        if(isSafeToPlace(board,i,k)):
            board[i][k]=1
            isPlaced = placeQueen(board, i+1)  #the recursive leap of faith
            if(isPlaced):
                return True
            board[i][k]=0  #BACKTRACK
    return False

def isSafeToPlace(board,i,k):
    for row in range(i):
        if(board[row][k]==1):
            return False
    x=i
    y=k
    while(x>=0 and y>=0):
        if(board[x][y]==1):
            return False
        x-=1
        y-=1
    x=i
    y=k
    while(x>=0 and y<len(board)):
        if(board[x][y]==1):
            return False
        x-=1
        y+=1
    return True


print("Enter the dimensions of the board separated by space: rows cols")
i,k = map(int,input().split())
board = [[0 for cols in range(k) ]for rows in range (i) ]
placeQueen(board, 0)
