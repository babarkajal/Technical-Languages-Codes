'''
Program 4: Write a Program to Print following Pattern.
E
a D b
c C d
B e
f
'''

row = int(input("Enter row: "))

ch1 = 65+row
ch2 = 97
temp =0
for outer in range(row):

    for inner1 in range(outer):
        print("  ",end="")
    
    for inner2 in range(temp , row):
        if inner2 %2 ==0:
            print(chr(ch1),end = " ")
            ch1 = ch1 - 1
        else:
            print(chr(ch2),end = " ")
            ch2 = ch2 + 1
    temp += 1     
    print()


