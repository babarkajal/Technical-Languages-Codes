'''
A
B  B
C  C  C
D  D  D  D
C  C  C
B  B
A
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
ch = 65
for i in range(row):
    
    for j in range(end):
            print(chr(ch), end= '  ')
        

    if i < middle:
            ch +=1
            end+=1

    else:
        ch-=1
        end -=1
    print()
