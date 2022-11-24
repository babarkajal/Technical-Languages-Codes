row = int (input("Enter row: "))

for outer in range(row):
    char = 64 + outer
    for inner in range(row):
        if outer+inner > row-1:
            print(chr(char) , end = " ")
            char -=1

        elif outer+inner == row-1:
                print("=" , end = " ")
        else:
            print(" ", end=" ")
    print()
