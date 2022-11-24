'''
Program 3: Write a Program that accepts a number from user and prints
Maximum element from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 14 5 6
Output: Minimum Element Entered In That Array : 1
'''
import array as arr

#create a empty array of intger type
elements = arr.array('i')

length = int(input('Enter length of an array: '))

for i in range(length):
    elements.append(int(input()))



print('Minimum num entered in that array',min(elements))
