'''
Program 3: Write a Program that accepts 2D Array of M Rows & N Columns
from user and prints only addition of even elements multiplied by max odd
element from that array.
Input: Enter Number of rows & cols: 3 3
Elements:
1 2 3
3 4 5
5 6 7
Output: Sum of Even Elements: 12
Max Odd Element: 7
Expected Output: 12 * 7 = 84
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

#print array

#max var
maxElement  =  array[0][0]
add = 0                     #store sum
print("Entered array: ")
for i in range(m):
    for j in range(n):
        print(array[i][j], end ='  ')
        #find sum
        if(array[i][j] %2==0):
            add +=array[i][j]
        #find max
        elif(array[i][j] > maxElement):
            maxElement = array[i][j]

    print()

print('Sum of even elements: ',add)
print('Max odd elements: ',maxElement)
print('Output',add,'*',maxElement,'=',add*maxElement)



