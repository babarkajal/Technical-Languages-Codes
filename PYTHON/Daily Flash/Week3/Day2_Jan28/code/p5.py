
num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: "))
num3 = int(input("Enter num3: "))

print(num1, end="") if num1 < num2 < num3 else print(num2,end = "") if num2 < num3 else print(num3,end = "")
print (" is the minimum number among " , num1 ,", ", num2, " and ", num3)
