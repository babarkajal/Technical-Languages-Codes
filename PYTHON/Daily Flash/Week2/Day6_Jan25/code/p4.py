
num1 = int(input("Enter num: "))




for i in range(num1):
    for j in range(i+1):
        if( i %2 == 0): 
            print("a" , end =" " )
        else:
            print("A" , end =" " )
    print()

