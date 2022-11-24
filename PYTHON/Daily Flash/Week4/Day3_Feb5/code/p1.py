limit = int(input("Enter limit for fibonacci series "))
num1 = 0
num2 = 1

print(num1, end = " ")
print(num2, end = " ")

for i in range(limit-2):
    sum = num1+ num2
    print(sum , end =" ")
    num1 = num2
    num2 = sum

print()

    
