'''
Program 3: Write a Program that accepts a number from user and prints
minimum digit from that number.
Input: 12357798
Output: The Min Digit from number 12357798 is 1
'''

def minDigit(num):
    minNo = num%10

    while num:
        rem = num%10
        if minNo > rem:
            minNo = num%10
        num //=10
    
    return minNo

num = int(input("Enter num: "))
print("The minimum digit from ", num , " is ", minDigit(num))
