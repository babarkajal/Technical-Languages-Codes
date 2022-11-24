'''
Program 3: Write a Program that accepts a number from user and stores every
digit from that number into an array.
Input: 3462
Output: Number Stored In Array: 3 4 6 2
'''

import array as arr
num = int(input('Ener a integer: '))


array_of_digits = arr.array('i')

#add the digits into an array
while num:
    array_of_digits.append(num%10)
    num //=10

#but the digits will be in reverse order so reverse the array
array_of_digits.reverse()

#digits
print('Digits stored in the array: ',end='')
for i in array_of_digits:
    print(i, end='  ')
print()



