'''

'''

row = int(input("Enter row: "))

for i in range(row):
    for j in range(row-i):
        if j%2 ==0:
            print("0", end=' ')
        else:
            print("1", end=' ')
    print()

