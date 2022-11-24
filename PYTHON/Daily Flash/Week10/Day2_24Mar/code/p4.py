'''
*
*  *
*  *  *
*  *  *  *
*  *  *
*  *
*

'''


#for this pattern row value should be odd
while True:
    row= int(input('Enter rows: '))
    if row%2 == 0:
        print('Please enter odd value')
        continue
    else:
        break



middle = row//2
end= 1
for i in range(row):
    
    for j in range(end):
        print('*', end= '  ')

    if i < middle:
            end+=1
    else:
        end -=1
    print()
