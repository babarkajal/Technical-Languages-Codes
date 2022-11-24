'''
Enter rows: 7
middle:  3
1  
2  3  
4  5  6  
7  8  9  10  
9  8  7  
6  5  
4  
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
print('middle: ', middle)
end= 1
num = 0
for i in range(row):

    for j in range(end):
        if i <= middle:
            num += 1
        else:
            num -= 1
        print(num, end= '  ')


    if i < middle:
            end+=1
    else:
        end -=1
        
    print()
