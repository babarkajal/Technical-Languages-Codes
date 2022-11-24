'''
Program 5: Write a Program that prints series of perfect numbers up to the
entered limiting number.
Input: 100
Output: The Series of all perfect number from 1 to 10 is
1, 6, 28
'''

limit = int(input("Enter limit: "))

for num in range(1,limit+1):
    sum =0
    for div in range(1, num//2+1):
        if(num%div==0):
            sum+=div
    if(num == sum):
        print(num, end = " ")
print()
