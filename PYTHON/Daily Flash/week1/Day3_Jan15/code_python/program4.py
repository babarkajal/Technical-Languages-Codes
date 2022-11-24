'''
Program 4: Write a Program to Print following Pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
'''

var = int (input ("num of rows: ") )

for x in range(var):
    for y in range(var):
        print(x+1 ,end =" ")
    print()

