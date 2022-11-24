T = int(input())
finalList = []

for i in range(T):
    finalList.append([int(x) for x in input().split()])
print(finalList)

for lst in finalList:
    x1 = lst[0]
    x2 = lst[2]
    y1 = lst[1]
    y2 = lst[3]
    x3 = lst[4]
    y3 = lst[5]

    if ( (x3 > x1 and x3 < x2) and (y3 > y1 and y3 < y2)):
        print("INSIDE")
    else:
        print("NOT INSIDE")
