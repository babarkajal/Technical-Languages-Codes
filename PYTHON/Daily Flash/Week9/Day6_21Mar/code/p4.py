'''
'''
row = int(input('Enter rows: '))
for i in range(row):

    for j in range(row*2-i-1):
        if j >=i :
            print(i+j,end='\t')
        else:
            print('  ',end='\t')


    print()

