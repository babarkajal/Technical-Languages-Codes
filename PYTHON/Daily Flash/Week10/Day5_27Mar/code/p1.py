'''
Program 1: Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 1/(x+y)^x + 2/(x+y)^y + 3/(x+y)^x + ... + n/(x+y)^a
(where x, y are the numbers entered by user, and a can be x if n is odd & y if n
is even)
Input:
Enter Length of Series: 3
Enter Value of X & Y = 3 4
'''


#-------------------------- Addition of series -------------------------------
def add(num,x,y):
    add_of_series = 0
    value = 1
    a = 0
    if n%2==0:
        a = y
    else:
        a = x

    while value<=num:
            add_of_series = add_of_series + value / ( (x+y)**a)
            value += 1

    return add_of_series
#--------------------------------------------------------------------------


n = int(input('Enter length of the series: '))
x,y = ( int(i) for i in input("Enter values of X & Y: ").split(" "))
print('the addition of series of length ',n,'=',add(n,x,y))
