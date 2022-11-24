
num = int(input("Enter num: "))


sumOfDivisor =0
for x in range(num//2):
        
    if(num % (x+1) == 0):
        sumOfDivisor += (x+1)


if(num ==sumOfDivisor):
        print(num , " is a perfect number" )
else:
        print(num , " is not a perfect number" )

