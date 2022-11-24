
num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: ") )


while num2 < num1:
        print("Enter num2 again(> num1): ")
        num2 = int(input("Enter num2: "));
for i in range(num1, num2):
    if( (i+1) %2 == 0): 
            print(i+1 , end = "  ")
print()

