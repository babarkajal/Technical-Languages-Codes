'''
	 	 	A
 	 	A	B	C
 	A	B	C	D	E
A	B	C	D	E	F	G
'''


row= int(input("Enter rows: "))

for i in range(row):
    ch = 65
    for j in range(row+i):
        if i+j >= row-1 :
            print(chr(ch), end= "\t")
            ch = ch+1
        else:
            print(" ", end= "\t")
    print()



