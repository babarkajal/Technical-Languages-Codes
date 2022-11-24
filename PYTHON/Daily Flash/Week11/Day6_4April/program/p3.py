'''
Program 3: Write a Program that accepts two Array of Length N from user and
Swaps the elements of same index from both array
Input: Length of Array: 6
Enter Elements in First Array: 1 4 3 2 5 6
Enter Elements in Second Array: 1 2 3 4 5 6
Output: Array First : 1 2 3 4 5 6, Array Second: 1 4 3 2 5 6
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

for i in range(N):
    temp = array1[i]
    array1[i] = array2[i]
    array2[i] = temp

print('Array after swap operation: ')
print('Array1: ', end='')
for i in array1:
        print(i,end= '  ')
print()
print('Array2: ', end='')
for i in array`2:
        print(i,end= '  ')
print()
