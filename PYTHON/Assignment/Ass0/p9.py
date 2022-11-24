'''
9.Write a Program to take two integer arrays of same length from user ,
multiply both array and Store the multiplication in 3rd array then print 3rd
Array.(use numpy array)
Input:
Arr1 = [1 , 2 ,3 ,4,5]
Arr2 = [2 ,4, 5, 9, 3]
Output:
Arr3 = [2, 8 , 15, 36, 15]
'''

from numpy import *

listInt = []

elements = int(input("Enter num of elements in array1: "))
print("Enter " , elements , " elements: ")

for lc in range(elements):
    listInt.append(input())

array1 = array(listInt,int)

print("Enter " , elements , " elements in array2: ")

listInt.clear()

for lc in range(elements):
    listInt.append(input())

array2 = array(listInt,int)


array3= array([],int)

i=0

while(i < len(array1)):
    mult = int(array1[i]) * int(array2[i])
    array3 = append(array3, mult)
    i+=1


print("Array 1 :")
print(array1)
print("Array 2 :")
print(array2)
print("Array 3:")
print(array3)
