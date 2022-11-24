'''
Program 2: Write a Program that prints Binary of Each Digit from entered
Number.
Input: 12
Output:
Binary of 1: 0001
Binary of 2: 0010
'''

num = int(input("Enter num: "))

while num:
    rem = num%10
    print("Binary conversion of ", rem,":", bin(rem))
    num //=10


