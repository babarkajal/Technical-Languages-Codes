'''
Program 3: Write a Program that accepts a number from user and prints
second Maximum digit from that number.
Input: 12357798
Output: The Second Maximum Digit from number 12357798 is 8
'''

num = int(input("Enter num: "))
temp = num

#take empty list 
sample = []

while temp:
    #take reminder 
    rem = temp%10
    sample.append(rem)
    temp //=10

maximum = max(sample)
print("maximum ", maximum)

secondMax = sample[0]
for i in sample:
    if i > secondMax and i < maximum:
        secondMax = i

print("The second maximum num from", num, "is", secondMax);
    

