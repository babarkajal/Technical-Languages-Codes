'''
Program 1: Write a Program that print Addition of Series up to nth length if
user provides length.
Series: (x+y) + (x+y)^2 + (x+y)^3 + (x+y)^4 + ... + (x+y)^n
(Where x, y are the numbers entered by user)
Input:
Enter Length of Series: 3
Enter Value of X & Y = 3 4
'''

#-------------------------- Addition of series -------------------------------
def add(num,x,y):
    add_of_series = 0
    value = 1

    while value<=num:
            add_of_series = add_of_series +  (x+y)**value
            value += 1

    return add_of_series
#--------------------------------------------------------------------------


n = int(input('Enter length of the series: '))
x,y = ( int(i) for i in input("Enter values of X & Y: ").split(" "))
print('the addition of series of length ',n,'=',add(n,x,y))

