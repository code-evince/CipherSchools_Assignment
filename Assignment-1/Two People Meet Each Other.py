import math
def Meet():
    print("enter p1,v1,p2,v2 separeted by spaces :  ")
    p1,v1,p2,v2 = map(int,input().split())
    if ((p1>p2 and v1>=v2) or (p1<p2 and v1<=v2)):
        return False
    return (math.abs(p1-p2) % math.abs(v1-v2))==0

if(Meet()):
    print("YES")
else:
    print("NO")
