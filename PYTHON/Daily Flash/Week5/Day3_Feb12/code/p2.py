'''
Program 2: Write a Program to Convert entered Octal Number to Hexadecimal
Number
Input: Decimal Number: 77
Output: Decimal Number: 3F
'''

num = int (input("Enter octal num: "))

decimal = 0
exp = 0
orgNo = num
#convert octal to the decimal
while num!=0 :
    mod = num%10
    decimal = decimal + mod * int(pow(8,exp))
    exp +=1
    num //=10


print("Hexadecimal conversion of ", orgNo, ": ", hex(decimal))
