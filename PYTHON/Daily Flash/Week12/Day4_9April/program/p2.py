'''
Program 3: Write a Program that accepts a Matrix of MxN order and checks
whether the entered matrix in an identity matrix or not. The order of matrix
i.e. the values of m & n must be equal if user enter dissimilar values then
program must ask user to re-enter the order of matrix.
Input: Enter Number of rows & cols: 3 3
'''

array = []

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
    array.append(a)

print("Entered array: ")
for i in range(m):
    for j in range(n):
        print(array[i][j], end ='  ')
    print()

counter = 0
#check for indentiy matrix
for i in range(m):
    for j in range(n):
        if i == j and array[i][j]==1:
            counter+=1
        elif(array[i][j] ==0):
            counter+=1
        
    
if counter == m*n:
    print("The entered matrix is an identity matrix")
else:
    print("The entered matrix is not an identity matrix")


