def printDecodings(number, output):

    #base case
    if(len(number)==0):
        print(output)
        return

    firstChar = number[0:1]

    firstNum = int(firstChar)

    if(firstNum != 0):
        character = chr(96+firstNum)
        printDecodings(number[1:], output+character)
    if(len(number)<=1):
        return

    firstTwoChar = number[0:2]

    firstTwoNum = int(firstTwoChar)
    #print("de: " +str(firstTwoNum))  #debug

    if(firstTwoNum<=26):
        character = chr(96+firstTwoNum)
        printDecodings(number[2:], output+character)

printDecodings("121", "")
