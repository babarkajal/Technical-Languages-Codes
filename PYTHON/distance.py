T = int(input())
if (10**5 < T or T < 0):
    exit(0)
finalList = []

for i in range(T):
    tempList = [int(x) for x in input().split()]
    for element in tempList:
        if(element < -10**9 or element > 10**9):
            exit(0)
    finalList.append(tempList)

for lst in finalList:
    flag = False
    x1 = lst[0]
    x2 = lst[2]
    y1 = lst[1]
    y2=  lst[3]
    x3 = lst[4]
    y3= lst[5]
    if (x3 > x1 and x3 < x2) and (y3 > y1 and y3 < y2 ):
        flag = True;
    if(flag):
        print("INSIDE")
    else:
        print("NOT INSIDE")
