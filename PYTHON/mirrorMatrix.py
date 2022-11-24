M = int(input("Enter m for matrix: "))
while True:
        N = int(input("Enter N for matrix: "))
        if M !=N:
            print("M and N should be equal for square matrix: ")
        else:
            break


array = []
print("Enter elemnts in matrix: ")
for i in range(M):
            temp = []
            print("Enter",N ,"elements: ")
            for j in range(N):
                temp.append(int(input()))
            array.append(temp)

print(array)

for i in range(M):
    for j in range(i+1):
        temp = array[i][j]
        array[i][j] = array[j][i]
        array[j][i]= temp

print("Miror array:")
print("[ ",end=' ')
for row in array:
        print(row)
print("] ")
