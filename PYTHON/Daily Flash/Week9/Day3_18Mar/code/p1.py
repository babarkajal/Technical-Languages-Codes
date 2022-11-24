'''
Program 1: Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: (1+1) * (2+2) * (3+3) * ... * (n+n).
Input: Enter Length of Series: 4
Output: The multiplication of Series of length 4 = 20
'''


num = int(input("Enter length of series: "))
sum_of_series = 1

value = 1
while value <= num:
        sum_of_series =sum_of_series * (value+value)

        value+=1

print('The multiplication of series of length',num,'=',sum_of_series)

