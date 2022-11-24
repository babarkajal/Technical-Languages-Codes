
#while True:
row = int(input('Enter row: '))
   

for i in range(row):
    for j in range(row):
        if (i>=j or i+j >= row-1)and i<= row//2:
            print('*',end='  ')
        elif (j>=i or i+j <= row-1)and i> row//2:
            print('*',end='  ')
        else:
            print(' ',end='  ')
            
    print()

