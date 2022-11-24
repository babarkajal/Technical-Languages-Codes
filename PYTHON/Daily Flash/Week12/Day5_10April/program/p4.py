n =int( input('Enter num : '))
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

n = 6 
r = 3
c = fact(n) / fact(r)*fact(n-r)
p = fact(n) / fact(r)
print('There are ',c,'ways to distribute', r,' medals amongst', n,' employees')
