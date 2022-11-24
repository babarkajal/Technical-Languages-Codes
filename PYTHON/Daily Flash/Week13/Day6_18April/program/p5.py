

matrix1= []
matrix2= []
matrix3= []

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


#multiplication of the matrices
for i in range(m):
    a=[]
    result = 0
    for j in range(n):

        #multiplication of every row with col
        result += matrix1[i][j] * matrix2[j][i]
        '''
            1   2   0           1   1   2
            0   1   1           2   1   1
            2   0   1           1   2   1

            matrix3[0][0]  = m1[00]*m2[00] + m1[01]*m2[10] + m1[02]* m2[20]
        
        '''
        a.append(result)
    matrix3.append(a)

#------------------------------------------------------------------------
print("Matrix3 after storing division of two matrices: ")
for i in range(m):
    for j in range(n):
        print(matrix3[i][j], end ='  ')
    print()

