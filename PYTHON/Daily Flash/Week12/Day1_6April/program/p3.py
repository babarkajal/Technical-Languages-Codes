'''
Program 3: Write a Program that accepts 2D Array of M Rows & N Columns
from user and prints that array.
Input: Enter Number of rows & cols : 2 2
Elements :  1 2
            3 4
Output:
1 2
3 4
'''

array = []

#accept only positive values
while True:
        m = int(input('Enter rows: '))
        n = int(input('Enter columns: '))
        if(m < 0 or n < 0):
            print('Enter only positive values: ')
            continue
        else:
            break


#accept array element from user
for i in range(m):
    a=[]
    for j in range(n):
        a.append(int(input()))
    array.append(a)

for i in range(m):
    for j in range(n):
        print(array[i][j], end ='  ')
    print()


