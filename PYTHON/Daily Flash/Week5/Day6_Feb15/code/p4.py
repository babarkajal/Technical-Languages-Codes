'''
Program 4: Write a Program to Print following Pattern.
100
16
81 64
49 36 25
9 4 1
'''

row = int(input("Enter num: "))

num = sum(range(row+1))

for outer in range(row):
    
    for inner in range(row):
        if outer+inner >= row-1:
            print(num*num, end= "  ")
            num -=1

        else:
                print("   ", end= "")
    print()


