
row = int(input("Enter row: "))

for outer in range(row):
    ch = ord('a') + 2*outer
    for inner in range(row):
        if inner+outer < row:
            print(chr(ch), end=' ')
            ch += 1

    print()

