'''
Program 2 : Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The s um number up to 10 : 55
'''

num = int(input("Enter num: "))
sum = 0;
for x in range(num):
        sum +=x+1;      #add

print("The sum of number up to 10: "+str(sum))

