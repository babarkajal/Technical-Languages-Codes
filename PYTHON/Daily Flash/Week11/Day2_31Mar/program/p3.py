'''
Program 3: Write a Program that accepts an Array on Length N from user and
calculates squares of all even elements and cubes of all odd elements from
that array and replaces the elements respectively with the answer
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: Array after operation: 1 4 27 16 125 36
'''

import array

#create an empty array
element = array.array('i')


N = int(input("Enter N for array: "))


print("Enter", N , "elements in an array: ")
for i in range(N):
    element.append(int(input()))

for i in range(len(element)):
    if element[i]%2==0:
        element[i] **=2
    else:
        element[i] **=3

print("Arrya after operation: ")
for i in element:
    print(i,end="  ")
print()
        

