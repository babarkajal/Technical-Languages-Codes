'''
Program 5: Write a Program that accepts Three integers from user and prints
maximum number from them.
Input: 56 7 99
Output: The Maximum number amongst 56 7 & 99 is 99
'''


num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: ") )
num3 = int(input("Enter num3: ") )

if num1 > num2:
    print(num1 , " is Maximum") if num1 > num3 else print(num3, " is Maximum")
else:
    print(num2 , " is Maximum") if num2 > num3 else print(num3, " is Maximum")
    

