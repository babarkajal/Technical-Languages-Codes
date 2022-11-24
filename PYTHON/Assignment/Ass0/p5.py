'''
5.Write a Program to accept string array from user, if reverse of string
appears in array ,Print Occurrence Count.(use numpy array)
Input:
cars = ["Ford", "Volvo", "BMW",”jaguar”,”dorf”,”audi”,”dorf”]
OutPut:
Reverse string of ford appeared 2 times.
'''

from numpy import array

elements = int(input("Enter num of strings: "))
print("Enter " , elements , " strings")
listStr = []

for lc in range(elements):
    listStr.append(input())

string = array(listStr)

print(string)
