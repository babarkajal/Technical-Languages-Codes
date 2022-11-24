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
        #3C3+C2
        if i==0:
            array[j][0] = 3*array[0][2] + array[0][1]
            
        #3C2-C1
        elif i==1:
            array[j][1] = 3*array[j][1] - array[j][0]
        #3C3
        elif i==2:
            array[j][2] = 3* array[j][2]

print("Matrix after operatirn: ")
for i in range(m):
    for j in range(n):
        print(array[i][j], end ='\t')
    print()


            

