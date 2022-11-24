'''
2.Write a Program to take input in Set , if Set has even number of
elements,print set is even ,else print middle element of set
Input:
Set1 = {“apple” , “banana” , “Cherry”,}
Output:
“Middle Element is “banana”
'''


sampleSet = set()
print(type(sampleSet))

element = int(input("Enter num of elements in set: "))

print("\nEnter ", element, " elements in set")

#take set from user
for i in range(element):
    sampleSet.add(input())



if(len(sampleSet)%2 == 0):
    print("Set contain even num of elements")

else:
    setList = list(sampleSet) 
    print(setList[len(setList)//2-1]) 






