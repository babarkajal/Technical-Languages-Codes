'''pattern '''

row = int(input("Enter rows: "))

for outer in range(row):
    ch = 65
    for inner in range(row):
        if outer+inner >= row-1:
            print(chr(ch), end= " " )
            ch += 1
        else:
            print(" ",end= " ")
    print()
