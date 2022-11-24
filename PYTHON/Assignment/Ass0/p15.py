row = int(input("Enter rows: "))
num = 10
for outer in range(row):
    for inner in range(outer+1):
        print(num*num, end = " ")
        num -= 1
    print()
