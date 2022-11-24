'''
Program 1: Write a Program that accepts two Array of N element from user and print the second largest array out of that unsorted array.
Input: Length of arrays : 5
Elements In Array: 5 4 6 2 1
Output: Second largest Element in Array: 5
'''

import array


sample1 = array.array('i')
N = int(input("Enter N for array: "))
print("enter",N,"elements in array")
for i in range(N):
    sample1.append(int(input()))

print('Array: ')
for i in sample1:
    print(i,end='  ')
print()

#first find max element
maxElement = sample1[0]
prev=maxElement
for i in sample1:
    
    if i > maxElement:
        prev = maxElement
        maxElement = i

#second find 
print("Second largest element in array: ", prev)
    

