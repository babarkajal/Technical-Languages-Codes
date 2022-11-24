'''
Program 5: Write a program that takes a number from user and prints whether
that number is circular prime or not.
{Note: A Circular Prime number is such a number where every combination by
arranging the digits from number is a prime number itself.
e.g: 197 is circular prime, where all combination 197, 971, 791 are prime
numbers}
Input: 11
Output: 11 is Circular prime
'''

#-------------------------------- Cirucular prime ------------------------
'''
Note: A Circular Prime number is such a number where every combination by
arranging the digits from number is a prime number itself.
e.g: 197 is circular prime, where all combination 197, 971, 791 are prime
numbers}
'''

def isPrime(num):
        flag =True
        for i in range(2,num//2+1):
            if num%i==0:
                flag=False
                break
        if !flag:
            return 1
        else
            return 0

def circularPrime(num):
        
        for i in list(num):



        
