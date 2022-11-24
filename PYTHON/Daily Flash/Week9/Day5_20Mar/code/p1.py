'''
Program 1: Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: 1 ^1 * 2^2 * 3^3 * ... * n*n
Input: Enter Length of Series: 3
Output: The multiplication of Series of length 3 = 108
'''

#-------------------------- Multiplicatio fun -------------------------------
def mult(num):
    mult_of_series =1
    value=1
    while value<=num:
        
        mult_of_series = mult_of_series * (value**value)
        value += 1

    return mult_of_series
#--------------------------------------------------------------------------


n = int(input('Enter length of the series: '))
print('the multiplication of series of length ',n,'=', mult(n));








