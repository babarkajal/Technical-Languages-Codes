
row = int(input("Enter row: "))

for outer in range(row):
    for inner in range(row):
        if inner+outer >= row-1:
            print(inner+1, end=' ')
        else:
            print(" ", end = " ")

    print()

