M = int(input("Enter m for matrix: "))
N = int(input("Enter N for matrix: "))

array = []
print("Enter elemnts in matrix: ")
for i in range(M):
            temp = []
            print("Enter",N ,"elements: ")
            for j in range(N):
                temp.append(int(input()))
            array.append(temp)

print(array)

i=0
for row in array:
    array[i].sort()
    i =i+1


print("sorted rows: ")
print(array)
