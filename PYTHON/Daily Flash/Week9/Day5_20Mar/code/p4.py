'''

'''
row = int(input('Enter rows: '))
ch = 65
for i in range(row):

    for j in range(row*2-i-1):
        if j >=i :
            print(chr(ch),i+j,end='\t',sep='')
            ch+=1
        else:
            print('  ',end='\t')


    print()

    
