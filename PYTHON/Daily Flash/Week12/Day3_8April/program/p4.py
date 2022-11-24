'''
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
    num = 1
    for j in range(row+i):
        if i+j >= row -1:
            if(j < row-1):
                print(num,end ='  ')
                num +=1
            else:
                print(num,end ='  ')
                num -=1

        else:
            if(j < row-1):
                num +=1
            else:
                num -=1
            
            print(' ',end='  ')

    print()
