row = int(input("Enter rows: "))

ch = 65
for outer in range(row):
    for inner in range(row):
        if(outer == inner):
            print("=", end= " ")
        else:
            print(inner+1,end= " ") 
    print()

