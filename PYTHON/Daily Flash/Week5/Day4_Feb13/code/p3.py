'''
Program 3: Write a Program to that accepts an integer value from user and
prints the sum of all digits from that number.
Input: 15895
Output: The sum digits from numbers 15895 is 28
'''

num = int (input("Enter integer: "))

sum_of_digits = 0

orignal = num

while num:
    rem = num%10
    sum_of_digits += rem
    num //=10

print("The sum of digits from num ", orignal , " is ", sum_of_digits)

