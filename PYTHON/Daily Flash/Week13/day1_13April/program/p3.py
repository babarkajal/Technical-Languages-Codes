'''
         1
      2  2  2
   3  3  3  3  3
4  4  4  4  4  4  4
   3  3  3  3  3
      2  2  2
         1
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
print("middle",middle)
end = middle
start = 1
num = middle
for i in range(row):
    for j in range(end+1):
        if i+j >=middle and i <= middle:
            print(i+1,end= '  ')
        elif j>=start and i > middle:
            print(num,end= '  ')
        else:
            print(' ',end='  ')

    if i < middle:
            end+=1
    elif i >= middle:
            end -=1
    if i > middle:
            start+=1
            num -=1
    print()
