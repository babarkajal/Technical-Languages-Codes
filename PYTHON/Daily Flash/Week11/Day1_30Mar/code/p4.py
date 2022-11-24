'''
Enter rows: 5
      0
   0  0
0  0  0
   0  0
      0

'''

while True:
    row= int(input("Enter rows: "))
    if row < 0 or row %2==0:
        print("Enter non-negeative and odd  row num: ")
        
    else:
        break;


middle = row//2
print(middle)
start = 1
for i in range(row):
    for j in range(middle+1):
        #first half part
        if(i+j >= middle) and i<=middle:
            print("0",end ="  ")
        #second half part
        elif(j >= start) and  i>middle:
            print("0",end ="  ")
        else:
            print(" ",end="  ")
    print()

    if(i > middle):
        start+=1




