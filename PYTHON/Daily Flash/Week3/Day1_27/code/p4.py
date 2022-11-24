'''
Program 4: Write a Program to Print following Pattern.
1
4 9 
16 25 36
49 64 81 100
'''

row = int(input("Enter rows: "))
num=1
for i in range(row):
    for j in range(i+1):
            print(num*num ,end =" " )
            num +=1
    print()

