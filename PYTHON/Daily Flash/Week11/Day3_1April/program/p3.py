'''
Program 3: Write a Program that accepts an Array on Length N from user and Sorts that array in ascending order.
Input: Length of Array: 6
Enter Elements in Array: 6 5 4 2 1 3
Output: Array after operation: 1 2 3 4 5 6
'''

import array
#-------------------------- sorting function ----------------------
def sort(element):
    for i in range(N):
        for j in range(i+1,N):
            if element[i] > element[j]:
                temp = element[i]
                element[i]=element[j]
                element[j]=temp
    
    #return sorted 
    return element
#------------------------------------------------------------------

#create an empty array
element = array.array('i')
N = int(input("Enter N for array: "))

print("Enter", N , "elements in an array: ")
for i in range(N):
    element.append(int(input()))


#sort array
element = sort(element)

print("Arrya in ascending order: ")
for i in element:
    print(i,end="  ")
print()
        

