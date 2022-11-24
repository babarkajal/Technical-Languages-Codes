'''
10. Write a Program To Accept 2 built-in integer arrays from user ,Then
Calculate Average of 1’st Array and Check if it’s available in 2nd array.
Input:
Arr1 = [3, 7, 9, 3, 8]
Arr2 = [11, 6 , 9 , 23]
'''

from numpy import array

listInt = []

elements = int(input("Enter num of elements in array1: "))
print("Enter " , elements , " elements: ")

for lc in range(elements):
    listInt.append(input())

array1 = array(listInt,int)

elements = int(input("Enter num of elements in array2: "))
print("Enter " , elements , " elements: ")

listInt.clear()
for lc in range(elements):
    listInt.append(input())

array2 = array(listInt, int)

sum =0
for loop1 in array1:
        sum +=int(loop1)

avg = sum//len(array1)

flag = False
for loop2 in array2:
    if(avg == loop2):
        flag = True

print("Input arrays: ")
print(array1)
print(array2)
print()

if(flag):
    print("Average of array1  ", avg, " is present in array2")
else:
    print("Average of array1  ", avg, " is NOT present in array2")

