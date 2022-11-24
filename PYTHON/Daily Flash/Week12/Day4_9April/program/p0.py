'''
Program 1: Write a Program that accepts two Array of N element from user and print subtract of each element from one array with each element form
other array and handle the case for getting absolute results.
Input: Length of arrays : 5
Array 1: 5 4 6 2 1
Array 2: 6 3 2 5 8
Output: Subtraction of elements: 1 1 4 3 7
'''

import array
import  math


sample1 = array.array('i')
sample2 = array.array('i')
N = int(input("Enter N for array: "))
print("enter",N,"elements in array1")
for i in range(N):
    sample1.append(int(input()))

print()
print("enter",N,"elements in array2")
for i in range(N):
    sample2.append(int(input()))
print("Subtraction of elements:")
for i in range(N):
    op = sample1[i]-sample2[i]
    if op > 0:
        print(sample1[i] - sample2[i] ,end = '  ')
    else:
        print(-(sample1[i] - sample2[i]),end = '  ')

print()
    


