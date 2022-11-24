'''
Program 5: Write a Program that takes a number as input from user and prints
the counts the occurrence of odd digits from it
Input: 123458
Output: The number 123458 has 3 Odd digits.
'''
orgNum = int(input("Enter num: "))

num = orgNum
countOdd = 0
while num!=0:
    mod = num%10

    #if mod is odd
    if mod%2!=0:
            countOdd+=1
    num //=10

print(orgNum , " has " , countOdd , " odd digits")
