'''
11.Write a Program To Accept 2 built in integer arrays from user ,then print
index of element in second array if its cube of element in first array.
Input:
arr1 = [1 2 3 4]
arr2=[ 2 5 8 64]
Output:
Index of 8 which is cube of 2 is 2
Index of 64 which is cube of 4 is 3
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

for val1 in array1:
    index = 0
    for val2 in array2:

        cube = val1*val1*val1
        if( val2 == cube) :
            print("Index of ", val2 , " which is  cube  of " , val1 , " is ", index)
        index += 1
