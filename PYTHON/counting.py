
element =list()

T = int(input("Enter t: "))
for loop1 in range(T):
    tempList =list()
    n = int(input("Enter n: "))
    for loop2 in range(n):
        tempList.append(int(input()))
        
    element.append(tempList)

print(element)
count = 0

for i in element:
    for j in i:
        if j < 0:
            count +=1
print("count",count)

for i in element:
    for j in range(len(i)-1):
        if i[j]* i[j+1] < 0:
            count +=1
        

print("count",count)
print("count",count%1000000007)
        



