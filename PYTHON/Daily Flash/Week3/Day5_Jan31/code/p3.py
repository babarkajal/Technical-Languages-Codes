'''
Program 3: Write a Program to Print following Pattern.
A A A A A
B B B B
C C C
D D
E
'''

row = int(input("Enter rows: "))

ch = 65

for outer in range(row):
    for inner in range(row):
        if outer+inner< row:
                print(chr(ch), end=" ")
        else: 
            pass
    ch +=1;
    print()

