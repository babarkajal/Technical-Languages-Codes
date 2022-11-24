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


for i in range(m):
    for j in range(n):
        #2R1+3R2
        if i==0:
            array[0][j] = 2*array[0][j] + 3*array[1][j]
        #2R1-R2
        elif i==1:
            array[1][j] = 2*array[1][j] - array[2][j]
        #4R3
        elif i==2:
            array[2][j] = 4* array[2][j]

print("Matrix after operatirn: ")
for i in range(m):
    for j in range(n):
        print(array[i][j], end ='\t')
    print()


            

