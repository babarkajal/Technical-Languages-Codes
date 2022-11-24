
import math

T = int(input())
if( 10 < T or T < 1 ):
    exit(0)
#to store final list
finalList = []

#to check wheather it is perfect or not
def isSquare(num):

    if(num < 0):
        return False
    root= math.sqrt(num)
    print(root)
    print(int(root+0.5) **2 )
    if int(root+0.5) **2 == num:
            return True
    else:
            return False

for i in range(T):
        tempList = []
        N = int(input())
        # for j in range(N):
        #     tempList.append(int(input()))
        if(10**4 < N or  N < 1):
                continue
        tempList = [int(x) for x in input().split(" ")]
        finalList.append(tempList)

for lst in finalList:
    count = 0
    for element in lst:
        if(isSquare(element)):
                count+=1;

    if(count == len(lst)):
        print("Yes")
    else:
        print("No")
