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

rowSum = []
colSum = []
addRow=addCol = 0
for i in range(m):
    addRow=0
    addCol=0
    for j in range(n):
       addRow += array[i][j] 
       addCol += array[j][i]
    rowSum.append(addRow)
    colSum.append(addCol)

print("sum of rows: ", rowSum)
print("sum of col: ", colSum)


