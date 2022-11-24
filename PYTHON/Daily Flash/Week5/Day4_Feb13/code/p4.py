'''
            A3
        B3  A4
    C3  B4  A5
D3  C4  B5  A6

'''


row = int(input("Enter row: "))

for outer in range(row):
    ch = 65+outer
    for inner in range(row):

        if outer + inner >= row-1:
            print(chr(ch)+str(outer+inner) , end= "  ")
            ch = ch -1
        else:
            print("  ", end= "  ")

    print()


