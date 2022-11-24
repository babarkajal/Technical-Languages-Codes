'''
Program 5: Write a Program that takes a number as input from user and prints
the factorials of each digit.
Input: 141
Output:
The Factorial of 1 is 1.
The Factorial of 4 is 24.
The Factorial of 1 is 1.
'''

num = int(input("Enter num: "))
digit = []

while num:
    rem = num%10
    digit.append(rem)    
    num //=10

digit.reverse()

for var in digit:
    fact = 1
    temp = var
    while temp:
        fact *= temp
        temp-=1

    print("The factorial of ", var,': ' , fact)



