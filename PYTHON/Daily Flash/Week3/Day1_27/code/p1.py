'''
Program 1: Write a Program to print series of Even numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Even Numbers Ranging between 4 & 60 is:
4, 6, 8, . . ., 60'''


num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: ") )


while num2 < num1:
        print("Enter num2 again(> num1): ")
        num2 = int(input("Enter num2: "));
for i in range(num1, num2):
    if( (i+1) %2 == 0): 
            print(i+1 , end = "  ")
print()

