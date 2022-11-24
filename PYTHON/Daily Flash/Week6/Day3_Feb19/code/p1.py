'''
Program 1: Write a Program that prints Sum an Arithmetic Progression (A.P.)
series. Take Starting element, Total count of elements in A.P. & the Common
Difference from user.
Input:
Starting Element: 1
Number of Elements: 8
Common Difference: 5
Output: The AP is: 1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148
'''

print("Enter three num: ")
start ,no ,diff, = int(input("Start: ")), int(input("No of elements: ")), int(input("Diffenerence: "))
AP = []
i =0
while i < no :
    AP.append(start)
    start +=diff
    print(AP[i], end= " ")
    i +=1

print()
print("The sum of AP : ", sum(AP));
