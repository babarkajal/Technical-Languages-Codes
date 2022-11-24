row = int (input("Enter row: "))

var = 0

#for stop condition for every row
stop = row*2-1 

for outer in range(row):
        num = 1
        for inner in range(stop):
            if inner >=outer:
                print(num, end=" ")
            else:
                print(" ", end= " ")
            num += 1
        
        stop -=1
        print()

