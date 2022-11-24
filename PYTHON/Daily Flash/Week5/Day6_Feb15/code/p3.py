'''
Program 3: Write a Program to that accepts an integer value from user and
prints the Square of each digit.
Input: 1234
Output:
The Square of 1 is 1
The Square of 2 is 4
The Square of 3 is 9
The Square of 4 is 16
'''


num = int(input("Enter num: "))
digit = []

while num:
    rem = num%10
    digit.append(rem)    
    num //=10

#reverse the list
digit.reverse()

for var in digit:
    print("The square of ", var , ": ", var*var)

