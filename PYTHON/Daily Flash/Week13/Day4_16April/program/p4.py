#for this pattern row value should be odd
while True:
    row= int(input('Enter rows: '))
    if row%2 == 0:
        print('Please enter odd value')
        continue
    else:
        break

middle = row//2
start = middle+2
print('start',start)

ch = 65
for i in range(row):
    if i <=middle:
        for j in range(middle+1):
            if i+j >= middle:
                print(chr(ch),end='   ')
                ch+=1
            else:
                print(' ',end=' ')
    else:
        for j in range(middle+1):
            if (i+j >= start):
                print(chr(ch),end='   ')
                ch+=1
            else:
                print(' ',end=' ')
        start +=2
    ch = ch-1
    print()



