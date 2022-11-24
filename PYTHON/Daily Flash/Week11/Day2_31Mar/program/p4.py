'''
Enter rows: 5
        02  
    11  12  
20  21  22  
    31  32  
        42  

'''


#this patteern requires only odd num of rows
while True:
    row= int(input("Enter rows: "))
    if row < 0 or row %2==0:
        print("Enter non-negeative and odd  row num: ")

    else:
        break


middle = row//2
start = 1
for i in range(row):

    for j in range(middle+1):
        if i+j >= middle and i<=middle:
            print(i,j,end="  ",sep='')
        elif j>=start and i>middle:
            print(i,j,end="  ",sep='')
        else:
            print("  ",end="  ")

    print()
    if i>middle:
        start +=1





