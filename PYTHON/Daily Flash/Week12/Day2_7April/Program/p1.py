'''
Program 1: Write a Program that accepts an Array of N elements from user and checks if each element from that array is a palindrome number of not and
prints only palindrome elements.
Input: Elements in Array: 5
Enter Elements in Array: 123 12321 11 23 1
Output: Palindrome Elements From array : 12321 11 1
'''

import array

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

sample = array.array('i')
N = int(input("Enter N for array: "))
print("enter",N,"elements")
for i in range(N):
    
    sample.append(int(input()))


flag = True
print("Palindrom eelements from an array")
for i in sample:
    if isPalindrome(i):
        print(i,end="  ")
        flag =False
print()
if(flag):
    print("No palindrome num found!!")


