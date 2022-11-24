'''
Program 5: Write a Program that accepts N numbers from user and calculates
Average of those numbers.
{Steps: we can calculate Average of numbers using following formula.
Average (a) = sumOfNumbers / countOfNumbers
}
Input:
Enter Value N: 5
Enter Values: 1 2 4 5 6
Output: Average (a) of Numbers = 3.6
'''
num =[]
N = int(input('Ente nums: '))
print('Enter',N,'nums')
for i in range(N):
    num.append(int(input()))

average = sum(num)/N

print('Average of num =',average)
