'''
Program 3: Write a Program that accepts an Array on Length N from user and Sorts that array in descending order.
Input: Length of Array: 6
Enter Elements in Array: 1 4 3 2 5 6
Output: Array after operation: 6 5 4 3 2 1
'''
import array
#-------------------------- Descending sort function ----------------------
def descendingSort(element):
    for i in range(N):
        for j in range(i+1,N):
            #if element is less than swap
            if element[i] < element[j]:
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


#sort array in descending 
element = descendingSort(element)

print("Arrya in decending order: ")
for i in element:
    print(i,end="  ")
print()
