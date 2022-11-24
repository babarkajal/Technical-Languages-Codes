'''
Program 4: Write a Program to Print following Pattern
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8
'''

row = int(input("Enter row: "))

for x in range(row):
    num = 2
    for y in range(row):
        print(num ,end = " ")
        num +=2
    print()
