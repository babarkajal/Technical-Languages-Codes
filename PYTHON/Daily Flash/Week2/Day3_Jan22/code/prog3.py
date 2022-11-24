'''
Program 3: Write a program that accepts two integers from user and prints
addition of their Cubes and subtraction of their Squares.
Input: 10 20
Output:
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300
'''

#take two num 
num1 = int(input("Enter num 1: "))
num2 = int(input("Enter num 2: "))

#calculate cube
c1 = num1*num1*num1
c2 = num2*num2*num2

#calculate square
s1 = num1*num1
s2 = num2*num2

print("Addition of " , c1 , "& ", c2 , " is " , c1+c2)
print("Substraction of " , s1 , "& ", s2 , " is " , s1-s2)
        
