'''
Program 1: Write a Program to check whether the entered number is Strong
Number or Not.
{Note: A number can be termed as strong number; if the sum of factorials of
each digit from that number is equal to that number, itself. e.g. 145 is a Strong
Number since 1 + 24 + 120 = 145.}
Input: 145
Output: 145 is a Strong Number.
'''

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


num = int(input("Enter num to check whether it s strong or not: "))

if num == strongNum(num):
    print(num, " is a strong num")
else:
    print(num, " is not a strong num")

