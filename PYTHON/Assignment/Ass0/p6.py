'''
6. Write a Program to take two integer arrays from user , add both array and
Store the addition in 3rd array then print 3rd Array.( use numpy array)
Input:
Arr1 = [1, 2, 3, 4, 5]
Arr2 = [5, 6, 7, 8, 9]
Output:
Arr3 = [6, 8 , 10, 12, 14]
'''

from numpy import *

listInt = []

elements = int(input("Enter num of elements in array1: "))
print("Enter " , elements , " elements: ")

for lc in range(elements):
    listInt.append(input())

array1 = array(listInt,int)

elements = int(input("Enter num of elements in array1: "))
print("Enter " , elements , " elements: ")

listInt.clear()
for lc in range(elements):
    listInt.append(input())

array2 = array(listInt,int)

array3 = array([],int)

for lc in range(len(array1)):
    sum = int(array1[lc] + array2[lc])
    array3 = append(array3 , sum)

print("array1: ")
print(array1)
print("array2: ")
print(array2)

print("adiition of two arrays: ")
print(array3)


