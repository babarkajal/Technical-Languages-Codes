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

num = 1    # to print num
ch = 65         #to print character
for i in range(row):
    for j in range(end+1):
        if i+j >=middle and i <= middle:
            if i %2==0:
                print(num,end= '  ')
            else:
                print(chr(ch),end= '  ')
        elif j>=start and i > middle:
            if i %2==0:
                print(num,end= '  ')
            else:
                print(chr(ch),end= '  ')
        else:
            print(' ',end='  ')

    if i < middle:
            end+=1
            if i%2!=0:
                ch +=1
            num +=1
    
    elif i >= middle:
            end -=1
            if i%2!=0:
                ch +=1
            num -=1
   
    if i > middle:
            start+=1
    print()
