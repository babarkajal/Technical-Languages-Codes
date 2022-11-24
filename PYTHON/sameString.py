T = int(input())

if T < 1 or T >1000:
    exit(0)
finalList = []
for i in range(T):
    finalList.append(input().strip())


flag = False
for string in finalList:
    for index in range(len(string)-1):
        if string[index] == string[index+1]:
                flag = True
                break
    if(flag):
        print("good")
    else:
        print("bad")
