'''
Program 3 : Write a Program that accepts a n inte ger from user and prints
whether that number is odd or even .
Input: 2
Output: 2 is an Even Number
'''

num = int(input("Enter number: "))

if num%2 == 0:
    print(str(num)+" is an Even number")
else:
    print(str(num)+" is an Odd number")
