'''
Program 3: Write a Program to that accepts 10 integers from user and breaks
the loop of accepting numbers if user enters a negative number.
{Note: Use Break Statement}
Input: 1 2 3 4 -6
Output: Negative Number Entered, Exiting The Loop!
'''

print("Enter 10 integers")
for num in range(1, 11):
    num =int(input())
    if(num < 0):
        break
    
