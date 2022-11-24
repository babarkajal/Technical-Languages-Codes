'''
Program 1: Write a program to print squares of first 10 numbers.
Output:
Square of 1 : 1
Square of 2: 4
Square of 3 : 9
.
.
.
Square of 1 0 : 1 00
'''

for x in range(10):
    print("Square of "+ str(x+1) + ": " + str ((x+1)* (x+1)))
