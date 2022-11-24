'''
Program 2: Write a Program to Convert entered Octal Number to Binary
Number
Input: Decimal Number: 17
Output: Octal Number: 1111
'''

octal = input("Enter octal num: ")

#first convert it into dec
dec = str(int(octal,8))

print("Decimal of octal = ", dec)
