'''
*   0   *   0   *   0   *   0   *   
    0   *   0   *   0   *   0   
        *   0   *   0   *   
            0   *   0   
                *   

'''
row = int(input('Enter rows: '))

for i in range(row):

    for j in range(row*2-i-1):
        if j >=i :
            if j%2==0:
                print('*',end='   ')
            else:
                print('0',end='   ')
        else:
            print(' ',end='   ')

    print()

