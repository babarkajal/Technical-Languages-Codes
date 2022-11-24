'''
Program 1: Write a Program that Checks whether a number entered by user is
an Automorphic Number or Nor.
{An Automorphic Number is such a number, whose Square ends with that
number itself. e.g. 5 is Automorphic number. Square of 5 is 25 which satisfies
the condition}
Input: 6
Output: 6 is An Automorphic Number.
'''

num = int(input("Enter num to check whether it is automorphic num or not: "))

square = num**2

last_digit = square%10

if last_digit  == num:
    print(str(num) + " is an automorphic num")
else:
    print(str(num) + " is not an automorphic num")


