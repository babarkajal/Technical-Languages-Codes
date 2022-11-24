row = int (input("Enter row: "))

var = 0

#for stop condition for every row
stop = 0 

for outer in range(row*2-1):
        if outer < row:
            stop +=1
        else:
            stop -=1
        for inner in range(stop):
            print(inner+1, end= " ")
        
        print()
