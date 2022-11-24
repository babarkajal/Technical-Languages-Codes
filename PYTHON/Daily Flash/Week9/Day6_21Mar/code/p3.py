'''
Program 3: Write a Program that accepts a number from user and prints sum &
average of elements from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output:
Sum of Elements of Array: 21
Average of Elements from Array: 3.5
'''

import array as arr

#create a empty array of intger type
elements = arr.array('i')

length = int(input('Enter length of an array: '))

for i in range(length):
    elements.append(int(input()))


addition = sum(elements)
avg = addition / length
print('Sum of Elements of Array',addition)
print('Average of Elements of Array',avg)

