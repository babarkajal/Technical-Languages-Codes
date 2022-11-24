'''
Program 3: Write a Program that accepts a number from user and prints
second minimum digit from that number.
Input: 12357798
Output: The Second minimum Digit from number 12357798 is 2
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
print("The second minimum num from", num, "is", secondMin);



