'''
Program 3: Write a Program that accepts a number from user and swaps that
first element from that array with last element of that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: Array Before Swapping: 1 2 3 4 5 6
Array After Swapping : 6 2 3 4 5 1
'''

import array as arr

#create a empty array of intger type
elements = arr.array('i')

length = int(input('Enter length of an array: '))

for i in range(length):
    elements.append(int(input()))


print("Array before swapping: ")
for i in elements:
    print(i,end= '  ')
print()

#swap the array
for i in range(length//2):
    temp = elements[i]
    elements[i]=elements[length-1-i]
    elements[length-1-i] = temp

print("Array After swapping: ")
for i in elements:
    print(i,end= '  ')
print()
