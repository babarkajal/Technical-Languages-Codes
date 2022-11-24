
row = int(input("Enter rows: "))

for outer in range(row):
    num = row -1
    for inner in range(row):

        if outer + inner >= row-1:
            print(num*num , end = " ")
            num +=1
        else:
            print(end="  ")
    print()




