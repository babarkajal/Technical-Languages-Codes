'''
Program 1: Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: (1) * (1+2) * (1+2+3) * ... * (1+2+3+4+...+n).
Input: Enter Length of Series: 4
Output: The multiplication of Series of length 4 = 20
'''

#-------------------------- Multiplicatio fun -------------------------------
def mult(num):
    mult_of_series =1
    value=1
    add = 0
    while value<=num:
        #it will add new value to the previous addtion e.g if value =4 then 4 will be added to the  add =1+2+3 
        add =add+value
        mult_of_series = mult_of_series * add
        value += 1

    return mult_of_series
#--------------------------------------------------------------------------



num = int(input("Enter length of series: "))
mult_of_series = mult(num)
print('The multiplication of series of length ',num,'=',mult_of_series)

