'''
Program 5: Write a Program that takes an array as input from user and prints
the array in reverse order.
Input: 1 2 3 4 5 6 7 8
Output: 8 7 6 5 4 3 2 1
'''
from array import array

print("Enter elements in an array: ")


arr = array('i', list( int(i) for i in (input().split(" "))))
print("Input array: ")

for i in arr:
    print(i , end=" ")
print()


print("Reverse")
arr.reverse()
for i in arr:
    print(i , end=" ")
print()



