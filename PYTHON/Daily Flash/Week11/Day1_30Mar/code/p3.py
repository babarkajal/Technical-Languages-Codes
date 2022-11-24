'''
Program 3: Write a Program that accepts a Array on Length N from user and
prints multiplication of all odd elements from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: multiplication of Odd Elements from that array : 15
'''

import array as arr

#create a empty array of intger type
elements = arr.array('i')

length = int(input('Enter length of an array: '))

for i in range(length):
    elements.append(int(input()))



mult =1
flag = False
for i in elements:
    if i%2!=0:
        flag =True
        mult *=i

if flag: 
    print("Multiplication of even num from an array: ",mult)
else:
    print("No any Odd num found in the array")
