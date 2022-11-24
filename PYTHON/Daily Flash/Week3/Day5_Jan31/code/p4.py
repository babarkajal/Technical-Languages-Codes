'''
Program 4: Write a Program to Print following Pattern.
7
6 5 
5 4 3 
4 3 2 1
'''

row = int(input("Enter rows: "))

for outer in range(1,row+1):
    var = row*2-outer
    for inner in range(outer):
        print(var, end=" ")
        var -=1
    print()

