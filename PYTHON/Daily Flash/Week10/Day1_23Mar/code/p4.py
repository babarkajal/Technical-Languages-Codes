'''
5	5	5	5	5	5	5
  	6	7	8	9	10
  	  	9	11	13
  	  	  	14
'''


row = int(input('Enter rows: '))
var = row+1
for i in range(row):

    for j in range(row*2-i-1):
        if j >=i :
            if i==0:
                print(var,end='\t')
            else:
                print(var+ j*i,end='\t')
        else:
            print('  ',end='\t')
        
    
    print()
