'''
Program 2: Write a Program that accepts Two integers from user and prints
minimum number from them.
Input: 56 99
Output: The Minimum number amongst 56 & 99 is 56
'''

num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: ") )

if num1 < num2:
    print(num1 , " is minimum")
else:
    print(num2 , " is minimum")

