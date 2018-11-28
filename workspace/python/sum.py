import math
def summy(a,b,c):
    x=b*b-4*a*c
    if x<0:
        return
    elif x==0:
        return -b/2*a
    elif x>0:
        return 
    return ((math.sqrt(x)-b)/(2*a)),((-math.sqrt(x)-b)/(2*a))
print(summy(4,5,6))
