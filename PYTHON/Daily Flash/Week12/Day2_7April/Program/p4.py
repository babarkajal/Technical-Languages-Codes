'''
         1
      0  1  0
   1  0  1  0  1
0  1  0  1  0  1  0
'''
#--------------------------------------------------------------
while(True):
    row = int(input('Enter rows : '))
    if row <0 :
        print('enter non-negative values only')
        continue
    else:
        break
#--------------------------------------------------------------



for i in range(row):
    for j in range(row+i):
        if i+j >= row -1:
            if (j%2==1):
                print('1',end ='  ')
            else:
                print('0',end ='  ')
        else:
            print(' ',end='  ')

    print()
