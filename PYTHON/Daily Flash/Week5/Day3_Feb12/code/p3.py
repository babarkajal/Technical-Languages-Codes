'''
Program 3: Write a Program to that accepts an integer value from user and
prints all odd numbers from that number to one using while loop.
Input: 65
Output: 65 63 61 59 57 53 51. ....1
'''

num = int(input("Enter limit for the series of odd num: "))

while num:
    if num%2 != 0:
        print(num, end= " ")

    else:
        pass
    num = num-1

print()


