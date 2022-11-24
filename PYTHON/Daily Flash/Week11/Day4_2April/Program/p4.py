'''
      A  
   B  C  
D  E  F  
   E  D  
      C 
'''
#this patteern requires only odd num of rows
while True:
    row= int(input("Enter rows: "))
    if row < 0 or row %2==0:
        print("Enter non-negeative and odd  row num: ")

    else:
        break


middle = row//2
start =1
ch = 65
for i in range(row):
    for j in range(middle+1):

        if i+j >= middle and i<=middle:
            print(chr(ch),end= '  ')
            ch+=1

        elif(j>=start and i>middle):
            ch-=1
            print(chr(ch),end= '  ')

        else:
            print(" ",end='  ')

    print()
    if i==middle:
        ch -=1
    if i > middle:
        start+=1

