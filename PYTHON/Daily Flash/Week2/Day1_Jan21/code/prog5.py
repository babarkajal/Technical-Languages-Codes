'''
Program 5 : Write a Program to print following Pattern.
Output :
0
0 0 
0 0 0 
0 0 0 0
'''

row = int(input("Enter row num: "))
for x in range(row):
    for y in range(x+1):
         print("0", end= "  ")
    print()

