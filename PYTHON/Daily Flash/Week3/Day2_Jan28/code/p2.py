
num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: "))


fact = 1
temp = 0
for x in range(num1, num2):      
        temp = x
        fact = 1

        while(temp):
            fact *=temp
            temp -=1
        
        print("Factorial of " , (x) ,": " , fact )

        
fact = 1
temp = num2

while(temp):
        fact *=temp
        temp -=1

print("Factorial of " , (num2) ,": " , fact )



