

matrix1= []
matrix2= []

#accept only positive values
print("enter M(row) and N(col) values from the matrix(M=N): ")
while True:
        m = int(input('\nEnter rows: '))
        n = int(input('Enter columns: '))
        if(m < 0 or n < 0 or m!=n):
            print('Enter only positive values and M and N should be same ')
            continue
        else:
            break


#accept array element from user
print("Enter element of matrix1: ")
for i in range(m):
    a=[]
    for j in range(n):
        a.append(int(input()))
    matrix1.append(a)
print("Enter element of matrix2: ")
for i in range(m):
    a=[]
    for j in range(n):
        a.append(int(input()))
    matrix2.append(a)

print("Entered matrix1: ")
for i in range(m):
    for j in range(n):
        print(matrix1[i][j], end ='  ')
    print()

print("Entered matrix2: ")
for i in range(m):
    for j in range(n):
        print(matrix2[i][j], end ='  ')
    print()

flag = False
for i in range(m):
    for j in range(n):
        if matrix1[i][j]!= matrix2[i][j]:
            flag =True


if flag:
    print("Both the matrix not are equal.")
else:
    print("Both the matrixare equal.")

