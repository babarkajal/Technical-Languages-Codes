'''
Program 3: Write a Program that accepts a Array on Length N from user and
prints multiplication of all even elements from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: multiplication of Even Elements from that array : 48
'''

import array as arr

#create a empty array of intger type
elements = arr.array('i')

length = int(input('Enter length of an array: '))

for i in range(length):
    elements.append(int(input()))



mult =1
for i in elements:
    if i%2==0:
        mult *=i

print("Multiplication of even num from an array: ",mult)

