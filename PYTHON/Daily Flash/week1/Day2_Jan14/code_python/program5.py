'''
Program 5: Write a Program to Find Maximum between three numbers
Input: 1 4 2
Output: 4 is Max number among 1, 4 & 2
'''

num1 = int(input("Enter number1: "))
num2 = int(input("Enter number2: "))
num3 = int(input("Enter number3: "))

if num2 < num1 > num3:
    print( num1 ," is max num among" , num1,", ",num2, "& ", num3)
elif num1 < num2 > num3:
    print( num2 ," is max num among" , num1,", ",num2, "& ", num3)
else:
    print( num3 ," is max num among" , num1,", ",num2, "& ", num3)
