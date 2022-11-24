row = int(input("Enter num: "))

ch = 65
for i in range(row):
    for j in range(row - i):
        ch = ch + j
        print(chr(ch), end="  ")
    
    print()
