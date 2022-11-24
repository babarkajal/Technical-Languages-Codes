'''
Program 3: Write a Program that accepts a number from user and prints
minimum & maximum digit from that number.
Input: 12357798
Output: Minimum Digit is 1 & Maximum Digit is 9
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

sample.sort()
secondMin = sample[1]
secondMax = sample[len(sample)-2]
print("The second minimum num from", num, "is", secondMin);
print("The second maximum num from", num, "is", secondMax);
