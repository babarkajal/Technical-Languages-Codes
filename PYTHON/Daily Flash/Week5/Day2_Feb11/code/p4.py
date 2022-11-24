# pattern

row = int(input("Enter rows: "))

for outer in range(row):
    ch = 65 + outer 
    for inner in range(row):

        if inner < row-outer-1: 
            print(" " ,end=" ")
        else:
             print(chr(ch) , end= " ")
             ch -=1

    print()

