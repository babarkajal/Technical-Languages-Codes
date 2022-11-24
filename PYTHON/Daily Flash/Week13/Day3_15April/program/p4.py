#for this pattern row value should be odd
while True:
    row= int(input('Enter rows: '))
    if row%2 == 0:
        print('Please enter odd value')
        continue
    else:
        break



middle = row//2
print("middle",middle)
end = middle
start = 1
for i in range(row):
    for j in range(end+1):
        if i+j >=middle and i <= middle:
            print('1',end= '  ')
        elif j>=start and i > middle:
            print('1',end= '  ')
        else:
            print(' ',end='  ')

    if i < middle:
            end+=1
    elif i >= middle:
            end -=1
    if i > middle:
            start+=1
    print()
