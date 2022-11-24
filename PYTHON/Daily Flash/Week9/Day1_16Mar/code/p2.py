'''
Program 2: Write a Program that replaces every occurrence of 1 with a digit N
from that number if user provides both the number & digit N to replace with 1.
Input:
Enter Number: 121145
Enter Digit to replace with 1: 5
Output: 525545
'''
value = int(input('Enter num: '))
replace_with = int(input("Enter digit to replace with 1: "))

#replace each a with the N
temp = value
rev = 0
while temp:
    rem = temp%10
    
    #if one found thn replce it with N
    if rem ==1:
        rev = rev*10 + replace_with
    else:
        rev = rev*10 + rem

    temp //=10


#again reverse the replced_num
replaced_num = 0

while rev:
    rem = rev %10
    replaced_num =replaced_num*10 + rem
    rev //=10


print("Num after replacement ",replaced_num)
