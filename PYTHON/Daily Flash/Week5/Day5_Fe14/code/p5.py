'''
Program 5: Write a Program that takes a number as input from user and prints
the counts the occurrence of 1’s from it.
Input: 1211234
Output:
The number 1211234 Contains 3 One’s.
'''

num = int (input("Enter integer: "))

sum_of_digits = 0

orignal = num
countOne = 0
while num:
    rem = num%10
    if rem == 1:
        countOne +=1
    num //=10

print("The ",orignal ," contains " , countOne, " one's")
