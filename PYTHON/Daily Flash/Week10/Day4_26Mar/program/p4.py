'''
'''
#for this pattern row value should be odd
while True:
    row= int(input('Enter rows: '))
    if row%2 == 0:
        print('Please enter odd value')
        continue
    else:
        break


char=['H','E','L','L','L','O' , 'W','O','R','L','D'];
middle = row//2
print('middle: ', middle)
end= 1
for i in range(row):

    for j in range(end):
        print(char[j], end= '  ')

    if i < middle:
            end+=1
    else:
        end -=1

    print()
