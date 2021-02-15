hashTable = ["", "", "abc", "def", "ghi", "jkl",
                    "mno", "pqrs", "tuv", "wxyz"]

def printWordsUtil(number, curr, output, n):
    if(curr == n):
        ans =''
        for i in output:
            ans+=i
        print(ans,end=' ')

        return

    for i in range(len(hashTable[number[curr]])):
        output.append(hashTable[number[curr]][i])
        printWordsUtil(number, curr + 1, output, n)
        output.pop()
        if(number[curr] == 0 or number[curr] == 1):
            return;

def possibleWords(a,N):
    printWordsUtil(a, 0, [], N)


import math



def main():
    print("Enter no of test cases :" )
    T=int(input())

    while(T>0):
        print("Enter no of buttons : ")
        N=int(input())
        print("Enter the numbers separated by spaces: ")
        a=[int(x) for x in input().strip().split()]

        possibleWords(a,N)

        print()

        T-=1

if __name__=="__main__":
    main()
