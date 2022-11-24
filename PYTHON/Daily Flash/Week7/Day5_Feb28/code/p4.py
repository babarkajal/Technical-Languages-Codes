'''
0A   1B   2C   3D
1A   2B   3C
2A   3B
3A
'''

row = int(input("Enter row: "))

for i in range(row):
    ch = 65
    for j in range(row-i):
        print("{}{}".format ( (i+j),(chr(ch))) ,end="   ")
        ch+=1
    print()



