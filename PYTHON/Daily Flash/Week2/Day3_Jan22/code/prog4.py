
num1 = int(input("Enter num 1: "))
num2 = int(input("Enter num 2: "))

opcode = input("Enter operation opcode(+, - , / , *) :")


if opcode == '+':
    print("Addition: " , num1+num2)
elif opcode == '-':
    print("Substraction: " , num1-num2)
elif opcode == '*':
    print("Multiplication: " , num1*num2)
elif opcode == '/':
    print("Division: " , num1/num2)
else: 
    print("Wrong opcode entered")
        
