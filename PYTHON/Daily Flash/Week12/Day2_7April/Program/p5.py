'''
Program 5: If a set n numbers is provides and you are, supposed to pick r items from that number then write a program to find the C(n, r) possible
combinations of r items from a set on n numbers, if user provides both n and r.
{Steps: to find combinations p(n, r) we have the formula,
C(n, r) = n!/r! * (n-r)!
Where,
P: is the number of permutations
N: is the length of set
R: is the number of items allowed to pick at a time.
}
Input:
N = 10
R = 2
Output: To pick 2 items from a set of 10 items there are 10 possible Combinations.
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


n = int(input("Enter n num: "))
r = int(input('enter r : '))

c = fact(n) / (fact(r) * fact(n-r))
print('To pick', r, 'from set of ',n,'items there are ', c ,'possible Combinations.')
