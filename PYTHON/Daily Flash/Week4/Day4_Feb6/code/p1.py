'''
Program 1: Write a Program to print Fibonacci Series of N elements. Where n is
a number entered by user.
Output: 0 1 1 2 3 5 8 13 21 34
'''

limit = int(input("Enter Limit for series: "))
num1= 0
num2=1
print(num1, end = " ")
print(num2, end = " ")

for i in range(limit-2):
    sum = num1+ num2
    print(sum , end =" ")
    num1 = num2
    num2 = sum

print()
