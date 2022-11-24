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


#convert matrix to lower triangular matrix
for i in range(m):
    for j in range(n):
        if j > i:
            array[i][j] = 0

print("Lower triangular array: ")
for i in range(m):
    for j in range(n):
        print(array[i][j], end ='  ')
    print()

