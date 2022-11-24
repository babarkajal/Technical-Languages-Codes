'''
Program 5: Write a Program that accepts N numbers from user and calculates
Average, Variance or Standard Deviation of that distribution of numbers on
user choice. Say used enters 1 then calculate average, 2 for Variance & 3 for
Standard Deviation, make program menu driven and must not terminate
unless user wants to exit from program by pressing (Y|y)
Input:
Enter size of distribution of numbers : 5
Enter 5 Numbers: 1 2 3 4 5 6
Choose Operation:
1 : Calculate Average
2 : Calculate Variance
3 : Calculate Standard Deviation
Want to Continue? (Press Y or N)
'''

from array import array
import math 

#take an array
num = array('i')

N = int(input('Enter nums: '))
print('Enter',N,'nums')
for i in range(N):
    num.append(int(input()))

#calculate avg

average = sum(num)/N
denometer= 0
for i in num:
    denometer = denometer + ((i-average)**2)
variance = denometer / N
standard_deviation = math.sqrt(variance)

while True:
    print('\n1.calculate Average\n2.Calculate Variance\n3.Calculate Standard deviation')
    choice = int(input('\nChoose operation: '))

    if choice == 1:
        print('Average of num ={0:.2f}'.format(average))
    elif choice == 2:
        print('Variance of num:{0:.2f}'.format(variance))
    elif choice == 3:
        print('Standard deviation:{0:.2f}'.format(standard_deviation))
    else:
        print('Enter valid choice')

    cont = input('\nWant to continue(y/n): ')
    if cont == 'n' or cont == 'N':
            break
    else:
            continue



    

