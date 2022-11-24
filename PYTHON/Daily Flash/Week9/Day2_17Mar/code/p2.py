'''
Program 2: Write a Program that replaces every occurrence of n1 with a digit
n2from that number if user provides the number & digit n1 to replace and digit
n2 to replace with n1.
Input:
Enter Number: 121145
Enter Digit from number to replace: 5
Enter Digit to replace with 5: 4
Output: 121144
'''

value = int(input('Enter num: '))
replace =int(input("Ener digit from num to replace: "))
replace_with = int(input("Enter digit to replace: "))

#replace each a with the N
temp = value
rev = 0
while temp:
    rem = temp%10

    #if entered n1 found thn replce it with n2
    if rem ==replace :
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

