def GenerateParenthesis(n, left, right, s):

    if(left == 0 and right==0):
        print(s)
        return
        #print the string

    if(left>0 ):
        #do rec call
        GenerateParenthesis(n, left-1, right, s+"(");


    if(right>0 and right>left):
        #do rec call
        GenerateParenthesis(n, left, right-1, s+")");

GenerateParenthesis(3, 3, 3, " ")
