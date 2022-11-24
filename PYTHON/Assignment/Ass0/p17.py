row = int (input("Enter row: "))

var = 0

#for stop condition for every row
stop = row 

for outer in range(row):
        num = 1
        inc = 0
        for inner in range(stop):
            if inner+outer >= row-1:
                #increment char 
                ch = 65 + inc   #will hold A B C D ...
                print(chr(ch), end=" ")
                inc += 1
            else:
                print(" ", end= " ")

        stop +=1
        print()

