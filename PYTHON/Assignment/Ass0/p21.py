#accept row
row = int (input("Enter row: "))

#for stop condition for every row
stop = row//2
start = 1

mid = row//2

start = mid - 1 
start = mid + 1


for outer in range(row):
    ch = 65 + div
    for inner in range(stop):

        if outer <= row//2:
            if outer + inner >= div -1: 
                print(chr(ch), end=" ")
            else:
                print(" " , end = " ")
            ch -=1

        else:
            if outer >= start:
                print(chr(ch), end = " ")
            else:
                print(" " , end = " ")
        
            ch +=1

        if outer < div: 
            stop +=1
        else:
            stop -=1

    print()

            
            
