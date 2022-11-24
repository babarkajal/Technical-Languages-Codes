'''
Program 3: Write a Program to that accepts an integer value from user and
prints all even numbers from that number to 0 using while loop.
Input: 65
Output: 64 62 60 58 56 54 52 . . . .. 0
'''

num= int(input("Enter num: "))

lc = num
while lc>=0:
    if lc%2 == 0:
        print(lc, end = " ")
    lc -=1

print()
