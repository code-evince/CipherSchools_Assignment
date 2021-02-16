def GeneratePaths(matrix,i,j,path):

    m = len(matrix)
    n = len(matrix[0])

    if(i==m-1 and j==n-1):
        path.append(matrix[i][j])
        print(path)   #print path
        path.pop()  #WHEN DONE BACKTRACK


    path.append(matrix[i][j])


    #go right
    if(j+1>=0 and j+1<n):
        GeneratePaths(matrix, i, j+1, path)
    #go down
    if(i+1>=0 and i+1<m):
        GeneratePaths(matrix, i+1, j, path)

    path.pop()

matrix = [[1,2,3],[4,5,6],[7,8,9]]
path =[]
GeneratePaths(matrix, 0, 0, path)
