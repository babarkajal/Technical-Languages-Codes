''''
Program 1: Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 0 + π/6 + π/6  + π/2 + ... + 2 π.
(where π = 3.142)
Input: Enter Length of Series: 3
Output: The addition of Series of length 3 = 1.52
'''


#-------------------------- Addition of series -------------------------------
def add(num):
    add_of_series = 0
    value = 0
    PI = 3.142
    mult = [0,1/6, 1/3,1/2, 1,3/2, 2];
    
    while value<num:

        add_of_series = add_of_series + PI * mult[value] 
        value += 1

    return add_of_series
#--------------------------------------------------------------------------


n = int(input('Enter length of the series: '))
print('the addition of series of length ',n,'=', add(n));

