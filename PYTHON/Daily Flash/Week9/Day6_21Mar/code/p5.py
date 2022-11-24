'''
Program 5: Write a Program that accepts N numbers from user and calculates
Variance of those numbers.
{Steps: we can calculate Standard Deviation using following formula.
Standard Deviation (s) = √v
Where,
V is Variance of those numbers.
}
Input:
Enter Value N: 3
Enter Values: 1 5 2
Output:
Average (a) of Numbers = 1.5
Variance of Numbers: 2.89
Standard Deviation of Numbers: 1.7
'''

from array import array
import math 

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
standard_deviation = math.sqrt(variance)
print('Average of num ={:.2}'.format(average))
print('Variance of num:{:.2}'.format(variance))
print('Standard deviation:{:.2f}'.format(standard_deviation))

