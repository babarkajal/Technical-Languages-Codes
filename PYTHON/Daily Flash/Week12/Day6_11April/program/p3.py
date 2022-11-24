'''
kajal@KAJAL:~/Desktop/Daily Flash/Python/Week12/Day6_11April/program$ python3 p3.py
Enter rows: 4
8  7  6  5  4  3  2
   7  6  5  4  3
      6  5  4
         5
'''

row = int(input("Enter rows: "))
for i in range(row):
    num = 8
    for j in range(row*2-i-1):
        if(j >=i):
            print(num,end= '  ' )
        else:
            print(" ",end='  ')
        num -=1
    print()


