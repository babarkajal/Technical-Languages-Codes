row = int(input("Enter rows: "))
num1 = 0
num2 = 1

for outer in range(row):
    for inner in range(outer+1):
        sum = num1+num2
        print(sum ,end = " ")
        num1 = num2
        num2 = sum
    print()
