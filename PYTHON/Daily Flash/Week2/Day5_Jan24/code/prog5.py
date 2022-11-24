
num = int(input("Enter num: "))

print("Perfect Divisor of: ")

for i in range(num//2):
    if i==0 :
            continue
    if(num% (i+1) == 0):
        print(i+1 , end= " ")
print()
