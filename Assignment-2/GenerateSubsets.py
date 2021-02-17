#User function Template for python3
# ********************* VERY IMPORTANT *************
# YOU LEARNT that if you want to return some output of a procedural function
# you can use this trick of powerSet.result=[] and you don't need to pass another
# parameter to the function like you did in your solution commented below, it's tidious
# in c++ however you need to follow the traditional way like in your commented solution
# and you solved that thing yourself, proud of you son
def recSet(rest,soFar=''):
    if(rest==""):
        powerSet.result.append(soFar)

    else:
        recSet(rest[1:],soFar+rest[0])

        recSet(rest[1:],soFar)


def powerSet(s):
    powerSet.result=[]
    recSet(s,soFar='')
    return powerSet.result
s = "123"
print(powerSet(s))


# def recSet(rest,result,soFar=''):
#     if(rest==""):
#         result.append(soFar)

#     else:
#         recSet(rest[1:],result,soFar+rest[0])

#         recSet(rest[1:],result,soFar)


# def powerSet(s):
#     result=[]
#     recSet(s,result,soFar='')
#     return result
