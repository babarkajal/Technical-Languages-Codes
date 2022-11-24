'''
			0	
		1	1	2	
	3	5	8	13	21	
34	55	89	144	233	377	610	
'''

row = int(input("Enter rows: "))

num1 = 0
num2 = 1
first = 0
for i in range(row):
    for j in range(row+i):

        if i+j>=row-1:
            if first == 0:
                print(num1,end = "\t")
            elif first == 1:
                print(num2, end= "\t")
            else:
                fib = num1+num2
                print (fib, end="\t")
                num1 = num2
                num2 = fib
            first +=1
        else:
            print(end = "\t")

    print()
