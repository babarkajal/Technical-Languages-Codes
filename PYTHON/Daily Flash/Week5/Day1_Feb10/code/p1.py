'''
Program 1: Write a Program to print series of Abundant numbers up to Nth
element, where N is a number entered by user.
'''

n = int(input("Enter N for series: "))

for num in range(1,n+1):
    sumOfDivisior = 0
    for div in range(1,num):
        #if num is divisible by div then add it to the sumOfDivisor
        if num%div == 0:
            sumOfDivisior += div
    
    if sumOfDivisior > num: 
        print(num, end= " ")

print()
