'''
Program 3: Write a Program that accepts a number from user and stores every
digit from that number in reverse order into an array.
Input: 3462
Output: Number Stored In Array: 2 6 4 3
'''
import array as arr
num = int(input('Ener a integer: '))


array_of_digits = arr.array('i')

#add the digits into an array
while num:
    array_of_digits.append(num%10)
    num //=10

#digits
print('Digits stored in reversed in an array: ',end='')
for i in array_of_digits:
    print(i, end='  ')
print()
