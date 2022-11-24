'''
Program 3: Write a Program to that accepts an integer value from user and
prints the Average of all the
Input: 1234
Output: The Average of digits from number 1234 is 5
'''


num = int (input("Enter integer: "))

sum_of_digits = 0

orignal = num
count = 0
while num:
    rem = num%10
    sum_of_digits += rem
    num //=10
    count +=1

avg = sum_of_digits/count
print("The average of digits from num ", orignal , " is ", avg)

