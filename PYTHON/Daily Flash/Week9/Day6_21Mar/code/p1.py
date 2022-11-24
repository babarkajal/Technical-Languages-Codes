'''
Program 1: Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 1^1*0 + 2^2*1 + 3^3*2 + ... + n^n*n-1
Input: Enter Length of Series: 3
Output: The addition of Series of length 3 = 734
'''


#-------------------------- Addition of series -------------------------------
def add(num):
    add_of_series = 0
    value=1
    mult = 0

    while value<=num:

        add_of_series = add_of_series + (value** (value* mult))
        value += 1
        mult+=1

    return add_of_series
#--------------------------------------------------------------------------


n = int(input('Enter length of the series: '))
print('the addition of series of length ',n,'=', add(n));




