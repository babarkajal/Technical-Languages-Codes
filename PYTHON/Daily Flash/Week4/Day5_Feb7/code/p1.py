num = int(input("Enter num: "))

flag = True
for lc in range(2, num//2+1):
    if(num % lc == 0):
        flag = False

if(flag):
    print(num, " is a prime num")
else:
    print(num, " is not a prime num")
