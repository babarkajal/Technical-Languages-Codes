t = int(input())

if 1 > t or t > 10:
    exit(0)

#store list
stringList =[]

for i in range(t):
    var = input()
    if len(var)<1 or len(var) >100:
        exit(0)
    if len(var) > 100000:
        exit(0)
    stringList.append(var)


for temp in stringList:
    parsed = []
    prefixCount = 0

    for index in range(len(temp)):
        parsed.append(temp[index:len(temp)])

    for parsedStr in parsed:
            if temp.startswith(parsedStr):
                prefixCount =prefixCount + len(parsedStr)
            else:
                count = 0
                for k in range(len(parsedStr)):
                    if temp[k] == parsedStr[k]:
                        count +=1
                    else:
                        break           #if mismatch found
                #add count to the prefix count
                prefixCount += count

    #print final count
    print(prefixCount)
