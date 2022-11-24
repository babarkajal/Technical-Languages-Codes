'''
1   2   3   4   5   6   7
    7   6   5   4   3
        3   4   5
            5
'''

row = int(input('Enter rows: '))
num =1
for i in range(row):

    for j in range(row*2-i-1):
        if j >=i :
            
            #if row is evem then inc the num else dec the num
            if i%2==0:
                print(num,end='   ')
                num +=1
            else:
                num-=1
                print(num,end='   ')
        else:
            print(' ',end='   ')


    print()

