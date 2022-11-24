'''
Program 5: Write a Program that takes a number as input from user and prints
the counts the occurrence of even digits from it
Input: 123458
Output: The number 123458 has 3 Even digits.
'''

orgNum = int(input("Enter num: "))

num = orgNum
countEven = 0
while num!=0:
    mod = num%10

    #if mod is even
    if mod%2==0:
            countEven+=1
    num //=10

print(orgNum , " has " , countEven , " Even digits")
