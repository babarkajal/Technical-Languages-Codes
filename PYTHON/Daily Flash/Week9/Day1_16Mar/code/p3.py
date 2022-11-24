'''
Program 3: Write a Program that computes & prints each Numbers entered by
user using do while loop until user enters a Palindrome Number.
Input: 10 6 22 50 301 232
Output: 10 6 22 50 301 Terminating
'''

# -------------------------- palindrome function ----------------------
def isPalindrome(num):
    reverse  = str(num)
    revNo = ''.join(reversed(reverse))
    revNo = int(revNo)
    if num == revNo:
        return True
    else:
        return False
#-----------------------------------------------------------------------


print("Enter integers: ")

value = []
flag = False

while True:
    num = int(input())
    if isPalindrome(num):
            flag = True
            break

    value.append(num)

print("Entered nums are:")
for i  in value:
    print(i,end= "  ")
if flag:
    print("Terminated")
print()

