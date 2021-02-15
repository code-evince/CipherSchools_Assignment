Set = input()
def permuteSet(rest,soFar=''):
    if(rest==""):
        print(soFar)

    else:
        for i in range(len(rest)):
            next= soFar+rest[i]
            remaining = rest[0:i] + rest[i+1:]
            permuteSet(remaining,next)


permuteSet(Set)
