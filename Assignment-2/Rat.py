# def isSafe( maze, x, y ):  #INCOMPLETE
# 	if x >= 0 and x < N and y >= 0 and y < N and maze[x][y] == 1:
# 		return True
# 	return False
#
#
# def mazeSolver(maze,i,j,solMaze,path):
#     if(i==len(maze)-1 and j==len(maze[0]-1) and maze[i][j]==1):
#         solMaze[i][j]=1
#         path=path+str(maze[i][j])
#         print(path)
#         return True
#
#
#     # Check if maze[x][y] is valid
#     if isSafe(maze, x, y) == True:
#         # Check if the current block is already part of solution path.
#         if sol[x][y] == 1:
#             return False
#
#         # mark x, y as part of solution path
#         sol[x][y] = 1
#         path+=str()
#
#         # Move forward in x direction
#         if solveMazeUtil(maze, x + 1, y, sol) == True:
#             return True
#
#         # If moving in x direction doesn't give solution
#         # then Move down in y direction
#         if solveMazeUtil(maze, x, y + 1, sol) == True:
#             return True
#
#         # If moving in y direction doesn't give solution then
#         # Move back in x direction
#         if solveMazeUtil(maze, x - 1, y, sol) == True:
#             return True
#
#         # If moving in backwards in x direction doesn't give solution
#         # then Move upwards in y direction
#         if solveMazeUtil(maze, x, y - 1, sol) == True:
#             return True
#
#         # If none of the above movements work then
#         # BACKTRACK: unmark x, y as part of solution path
#         sol[x][y] = 0
#         return False
#
# maze = [[1,0,0,0],
#         [1,1,0,1],
#         [1,1,0,0],
#         [0,1,1,1]]
#
# path =[[0 for i in range len(maze[0]-1)]for j in range(len(maze))]
# mazeSolver(maze,0,0,solMaze,path)
