sumOfDiv = 0

for num in range(100):

    sumOfDiv= 0
    for div in range(1,num):

        if num % div==0:
            sumOfDiv +=div

    if sumOfDiv == num:
        continue
    print(num, end = " ")
print()
