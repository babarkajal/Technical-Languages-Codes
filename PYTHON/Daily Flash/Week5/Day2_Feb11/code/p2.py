'''
Program 2: Write a Program to Convert entered Octal Number to Decimal
Number
Input: Decimal Number: 17
Output: Decimal Number: 15
'''

num = int (input("Enter octal num: "))

decimal = 0
exp = 0

while num!=0 :
    mod = num%10
    decimal = decimal + mod * int(pow(8,exp))
    exp +=1
    num //=10

print("Decimal num: ", decimal)
