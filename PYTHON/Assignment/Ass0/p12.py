'''
12.Write a Program To Take range as input from user,Print Occurrence count
of 1 in that range.
Input: 20
Output:11
'''

limit = int(input("Enter range: "))

count_of_one = 0

for i in range(1, limit+1) :
    num = i
    while num != 0:
        mod = num % 10
        if mod == 1:
            count_of_one +=1;
        num //=10
print("Occurance of 1 in range 1 to ", limit , "is " , count_of_one )
