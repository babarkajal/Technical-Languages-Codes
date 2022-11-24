'''
Program 1: Write a Program that accepts an Array of N element from user and
calculate the Average, Variance & Standard Deviation of those elements in
Array. {Note: Please Refer Previous Program for formula}
'''

import array
import  math


sample = array.array('i')
N = int(input("Enter N for array: "))
print("enter",N,"elements")
for i in range(N):
    sample.append(int(input()))

avg = sum(sample)/N
denometer= 0
for i in sample:
    denometer = denometer + ((i-avg)**2)

variance = denometer / N
standard_deviation = math.sqrt(variance)
print("average =" ,avg)
print("Variance =",variance)
print("standard deviation =",standard_deviation)



