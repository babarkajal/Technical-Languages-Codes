'''
Program 1: Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: (1*1) * (2*2) * (3*3) * ... * (n*n).
Input: Enter Length of Series: 4
Output: The multiplication of Series of length 4 = 576
'''

series = int(input("Enter length of series: "))
value= 1
mult = 1
for i in range(series):
    mult *=(value*value)
    value+=1


print("The multiplication of series of length",series,"=",mult)

