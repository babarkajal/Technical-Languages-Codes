'''
1   2   3   4   5   6   7
    2   3   4   5   6
        3   4   5
            4

'''

row = int(input('Enter rows: '))

for i in range(row):
    num =1
    for j in range(row*2-i-1):
        if j >=i:
            print(num,end='   ')
        else:
            print(' ',end='   ')
        num+=1
    print()
    

