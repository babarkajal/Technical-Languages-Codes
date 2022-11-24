'''
Program 1: Write a Program that prints the Series of palindrome bounding
between limits entered by user.
Input:
Lower Bound: 300
Upper Bound: 350
Output: 303, 313, 323, 333, 343
'''

def isPalindrome(num):
    rev = 0
    temp = num
    while temp:
        rev = rev*10 + temp%10
        temp //=10
    if num == rev:
        return True



#take two num from user and store it into two var
start ,end = (int(i) for i in input("Enter start and end for the palindrome seris: ").split())

for i in range(start, end):
        if isPalindrome(i):
            print(i ,end= "  ")
print()
