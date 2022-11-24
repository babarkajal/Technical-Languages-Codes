'''
Program 1: Write a Program to print series of Deficient Numbers up to nth
element. Where n is number entered by user.
'''

num = int (input("Enter num: "))

print("List of deficient num upto ", num)

for i in range(1, num+1):
    sumOfDiv = 0
    #print(i)
    for div in range(1 , i//2+1):
        if (i%div == 0):
            sumOfDiv = sumOfDiv + div
    
    if(i > sumOfDiv):
        print(i, end=" ")


print()
