'''
Program 1: Write a Program that prints the series of automorphic numbers
ranging between 1 to 60
Output: 1, 5, 6 . . .
'''
def automorphic(num):
    #calculate square
    square = num**2

    last_digit= square%10

    if num == last_digit:
        return True
    else:
        return False


#find automorphic num from 1 to 60
print("Automorphic series upto 60")
for i in range(1,61):
    if automorphic(i):
        print(i, end="  ")


        

print()
