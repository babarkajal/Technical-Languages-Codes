'''
Program 1: Write a Program that print Addition of Series up to nth length if user provides length.
Series: (x+y)^1 * 1! + (x+y)^2*2! + (x+y)^3 * 3! + ... + (x+y)^n*n!
( Where: x & y are the numbers entered by user)
Input: Enter Values of x & y = 2 4
Enter Length of Series: 3
Output: The Addition of entered Series: 1446
'''

#----------------------------- Factorial ----------------------------------
def fact(num):
    fact = 1
    if num == 0 or num == 1:
        return 1
    for i in range(1,num+1):
        fact = fact*i

    return fact
#--------------------------------------------------------------------------

#-------------------------- Addition of series -------------------------------
def add(num,x,y):
    add_of_series = 0
    value = 1

    while value <= num:
            add_of_series = add_of_series +  (x+y)**value*fact(value)
            value += 1

    return add_of_series
#--------------------------------------------------------------------------


n = int(input('Enter length of the series: '))
x,y = (int(i) for i in input("Enter x and y values: ").split())
print('the addition of series of length ',n,'={0:.2f}'.format(add(n,x,y)))
