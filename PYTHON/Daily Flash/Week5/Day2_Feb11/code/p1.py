'''
Program 1: Write a Program to check whether the entered number by user is
Deficient or not.
{Note: A Number is termed as deficient number, if sum of all of its perfect
divisors is less than the number itself.
E.g. 15 is deficient number, since 1 + 3 +
5 = 9 < 15.}
Input: 45
Output: 45 is Deficient Number.
'''

num = int(input("Enter num: "))

sumOfDivisor = 0

for i in range(1,num//2+1):
            if num%i == 0:
                sumOfDivisor += i

if num > sumOfDivisor:
    print(num, " is deficient number ")
else:
    print(num, " is not deficient number ")
