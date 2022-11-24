'''
Program 3: Write a Program that accepts a Array on Length N from user and
prints square of every odd elements from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: Square of Odd Elements from that array : 1 9 25
'''


import array as arr

#create a empty array of intger type
elements = arr.array('i')

length = int(input('Enter length of an array: '))

for i in range(length):
    elements.append(int(input()))


print("Square of odd elements form an array:")
for i in elements: 
    if i%2!=0:
        print(i**2,end='  ')

print()

