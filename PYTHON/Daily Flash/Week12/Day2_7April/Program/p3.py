'''
Program 3: Write a Program that accepts 2D Array of M Rows & N Columns
from user and prints only diagonal elements from that array
Input: Enter Number of rows & cols : 3 3
Elements : 1 2 3
3 4 5
5 6 7
Output: Diagonal Elements from that array are : 1 4 7
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

print("Entered array: ")
for i in range(m):
    for j in range(n):
        print(array[i][j], end ='  ')
    print()
#find digonal elements
print("Digonal elements: ")
for i in range(m):
    for j in range(n):
        if i==j:
            print(array[i][j],end= '  ')

print()
