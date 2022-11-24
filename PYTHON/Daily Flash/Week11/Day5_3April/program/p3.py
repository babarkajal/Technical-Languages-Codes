'''
Program 3: Write a Program that accepts two Array of Length N from user and
Computes multiplication of elements at same index from those array and
stores that multiplication into third array at the same index, Print the third
array.
Input: Length of Array: 6
Enter Elements in First Array: 1 4 3 2 5 6
Enter Elements in Second Array: 1 2 3 4 5 6
Output: After Operation the elements in third array : 1 6 9 8 25 36
'''

import array


#create two empty array
array1 = array.array('i')
array2 = array.array('i')

#create empty array to store the multiplication
array3 = array.array('i')
N = int(input("Enter N for arrays: "))

print("Enter", N , "elements in an array1: ")
for i in range(N):
    array1.append(int(input()))

print("Enter", N , "elements in an array2: ")
for i in range(N):
    array2.append(int(input()))


#Store the addition of two array into third
for i in range(N):
    array3.append(array1[i]+array2[i])

#print after operation
print('After operation the elements in third array: ')
for i in array3:
    print(i,end= '  ')
print()



