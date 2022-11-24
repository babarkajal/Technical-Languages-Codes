row = int(input("Enter rows: "))

ch = 65
for outer in range(row):
    for inner in range(row):
        if(outer +inner >=row-1):
            print(chr(ch+inner), end= " ")
        else:
            print("  ",end= "") 
    print()

