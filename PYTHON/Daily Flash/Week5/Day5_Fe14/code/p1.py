

def fact(num):
    fact =1 
    while num:
        fact *= num
        num = num-1
    return fact



def strongNum(num):
        sum_of_fact = 0

        while num!=0:
            rem = num%10
            sum_of_fact += fact(rem)
            num //=10

        return sum_of_fact


num = int(input("Enter limit for series of strong num: "))
for i in range(1,num+1):
    if i == strongNum(i):
        print(i, end = " ")

print()
