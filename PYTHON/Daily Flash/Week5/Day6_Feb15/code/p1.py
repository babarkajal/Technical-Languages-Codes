'''
Program 1: Write a Program to takes a number from user and prints those
digits who are prime in nature.
Input: 16532
Output: The Prime Digits are 1 5 3 2
'''

num = int(input("Enter num: "))
digit = []

while num:
    rem = num%10
    digit.append(rem)    
    num //=10

print("The prime digits are: ")
for lc in range(len(digit)-1 , -1 , -1):
    flag = True 
    for div in range(2 , digit[lc]):
            if digit[lc] % div == 0:
                flag = False

    if flag:
        print(digit[lc] , end= " ")
print()


