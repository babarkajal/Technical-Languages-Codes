'''
Program 5: Write a Program that accepts 5 integer values from user and
compares two consecutive inputs and if the second of them is lesser that the
previous one then the code exits out of loop and prints the unexpected input.
{Note: Use Break Statement}
Input: 1 3 5 4
Output: Loop is exited with input 4.
'''
print("Enetr 5 integers")
num = int(input())
prev = num

for i in range(2,6):
    num = int(input())
    if prev > num:
        print('Unexpected input.  Loop is exicted with input '+ str(i))
        break
    prev = num 
    
