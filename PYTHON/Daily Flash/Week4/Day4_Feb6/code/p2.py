'''
Program 2: Write a Program to Convert entered Decimal Number to Binary
Number
Input: Binary Number: 35
Output: Octal Number: 100011
'''

#import array
import array

decimal = int(input("Enter decimal number: "))
len = 0

#take one array
binary = array.array('i')

while(decimal != 1): 
	    rem = decimal %2
	    binary.append(rem)
	    decimal //=2
    

binary.append(decimal)

print("Binary conversion: ", end= "");
binary.reverse()
for i in binary:
    print(i,end="")
print()
