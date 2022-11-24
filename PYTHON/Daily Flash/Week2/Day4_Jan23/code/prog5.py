#factorial 

fact = 1
num = int(input("Enter integer: "))

for lc in range(num):
        fact *= (lc+1)

print("Factorial of ", num, ": ", fact)
