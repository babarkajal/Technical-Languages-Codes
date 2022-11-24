'''
Program 5: Write a Program that accepts N numbers from user and calculates Variance of those numbers.
{Steps: we can calculate Average of numbers using following formula.
Variance (v) = ∑(x-a)^2 / n
Where,
    X are numbers entered,
    A is average of those numbers
    n is count of those numbers }
Input:
    Enter Value N: 3
    Enter Values: 1 5 2
Output:
    Average (a) of Numbers = 1.5
    Variance of Numbers: 2.89
'''

from array import array

#take an array
num = array('i')

N = int(input('Enter nums: '))
print('Enter',N,'nums')
for i in range(N):
    num.append(int(input()))

#calculate avg 

average = sum(num)/N

denometer= 0
for i in num:
    denometer = denometer + ((i-average)**2)

variance = denometer / N

print('Average of num ={:.2}'.format(average))
print('Variance of num:{:.2}'.format(variance))


