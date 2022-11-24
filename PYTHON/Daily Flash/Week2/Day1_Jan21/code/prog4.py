'''
Program 4: Write a Program that accepts an integer from user and print table
of that number.
Input: 4
Output: 4 8 12 16 20 24 28 36 40
'''

num = int(input("Enter input: "))

print("Table of ", num);
for x in range(10):
        print( (x+1)*num , end ="  ")
print()
