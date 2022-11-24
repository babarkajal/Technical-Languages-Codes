

matrix= []

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
for i in range(m):
    a=[]
    for j in range(n):
        a.append(int(input()))
    matrix.append(a)

print("Entered matrix: ")
for i in range(m):
    for j in range(n):
        print(matrix[i][j], end ='  ')
    print()
x=(matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]))
y=(matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]))
z=(matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]))
determinant = x - y + z

print('Determinant of matrix: ',determinant )
