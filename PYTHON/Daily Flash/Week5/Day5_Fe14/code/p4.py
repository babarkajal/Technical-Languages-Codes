row = int(input("Enter row: "))

for outer in range(row):
    for inner in range(row):
        if outer+inner == row-1:
            print("#  ", end= "")
        elif outer + inner >= row-1:
            print("*  ", end= "")
        else:
            print("   ", end= "")

    print()


