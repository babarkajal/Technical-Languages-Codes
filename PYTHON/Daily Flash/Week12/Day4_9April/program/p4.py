'''
Program 5: How many ways are there to distribute 3 same medals amongst eight employees.
{ Note: when there are chances for rearranging things then we compute
combinations, here in our example the 3 medals can be distributed amongst 3
but we can rearrange the 3 in themselves too, where N is employees we have
and R is medals we have}
Output: There are 56 combinations to distribute 3 medals amongst 8
employees
'''

n =int( input('Enter num of employees: '))
r = int(input("Enter medals we have: "))

#----------------------------- Factorial ----------------------------------
def fact(num):
    fact = 1
    if num == 0 or num == 1:
        return 1
    for i in range(1,num+1):
        fact = fact*i

    return fact
#--------------------------------------------------------------------------


c = fact(n) / fact(r)*fact(n-r)
print('There are ',c,'ways to distribute', r,' medals amongst', n,' employees')
