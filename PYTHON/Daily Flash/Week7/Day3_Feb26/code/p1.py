'''
Program 1: Write a Program that prints the Series of palindrome ranging in 300
to 600
Output: 313, 323, 333, 343 . . .
'''
def isPalindrome(num):
    rev = 0
    temp = num
    while temp:
        rev = rev*10 + temp%10
        temp //=10
    if num == rev:
        return True


for i in range(300, 601):
        if isPalindrome(i):
            print(i ,end= "  ")
print()

    

