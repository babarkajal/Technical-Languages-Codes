'''
Program 1: Write a Program to check whether the entered number is
Abundant number or not.
{Note: a number can be termed as abundant if the sum of all of its perfect
divisors is greater than that number itself, e.g. 12: 1+2+3+4+6 = 16 > 12 so 12
is an abundant number.}
Input: 18
Output: 18 is abundant number since 1 + 2 + 3 + 6 + 9 = 21, which is greater
than 18.
'''

num = int(input("Enter num: "))

sumOfDiv = 0
for lc  in range(1, num//2+1):
    if num % lc == 0:
        sumOfDiv +=lc
if sumOfDiv > num:
    print(num , " is abundant number")
else:
    print(num , " is  not abundant number")
