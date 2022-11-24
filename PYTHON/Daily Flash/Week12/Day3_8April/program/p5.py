'''
Program 5: How many ways are there to distribute 3 medals (Gold, Silver,
Bronze) amongst eight employees. { Note Compute permutations, where N is
employees we have and r is medals we have}
Output: There are 336 ways to distribute 3 medals amongst 8 employees
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


p = fact(n) / fact(n-r)
print('There are ',p,'ways to distribute', r,' medals amongst', n,' employees')
