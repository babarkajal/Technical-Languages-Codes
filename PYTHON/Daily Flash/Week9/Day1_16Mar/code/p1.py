'''
Program 1: Write a Program that prints all the prime factors of a number
entered by user.
Input: 10
Output: Prime Factors of 10 are 2, 5
'''


# ----------------------------------- Prime num -----------------------------------
def isPrime(num):
    flag = True

    for i in range(2, num//2+1):
        
        if num %i == 0:
            flag=False


    if flag:
        return True
    else:
        return False

# ---------------------------------------------------------------------------------
value = int(input('Enter any integer: '))

print("Prime factor of ", value,"are")

for i in range(2,value//2+1):
    
    if value % i == 0:
        if isPrime(i):
            print(i,end= '  ')


print()


    
        

