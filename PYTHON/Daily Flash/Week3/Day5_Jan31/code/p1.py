'''
Program 1: Write a Program to that prints the series which increases with the
number entered by user.
Input: 15
Output: 1 16 31 46 . . ..
'''

inc = int(input("Enter num to increment the series: "))

var = 1
#to limit the series take 100 
for i in range(100):
    print(var, end= " ")
    
    #increment var by inc entered by user
    var +=inc
print()

