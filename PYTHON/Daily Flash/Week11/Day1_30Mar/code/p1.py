'''
Program 1: Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 1/1! + 1/2! + 1/3! + ... + 1/n!
Input:
Enter Length of Series: 3
Output : The Addition of entered Series : 1.66
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
def add(num):
    add_of_series = 0
    value = 1

    while value <= num:
            add_of_series = add_of_series +  1/fact(value)
            value += 1

    return add_of_series
#--------------------------------------------------------------------------


n = int(input('Enter length of the series: '))
print('the addition of series of length ',n,'={0:.2f}'.format(add(n)))

