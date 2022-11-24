'''
Program 3: Write a Program to take number of month and print the number of
days in that month.
Input: 4
Output: April is a 30 days’ month.
'''


while True:
    var = int( input("Enter Month(1-12): "))
    if(var < 1 or var > 12):
        print("Wrong input value!! Enter Again")
        continue
    break
    

if var==1:
    print("January is a 31 Day's Month")

elif var == 2:
    print("February is a 28/29 Day's Month")

elif var == 3:
    print("March is a 31 Day's Month")

elif var == 4:
    print("April is a 30 Day's Month")

elif var == 5:
    print("May is a 31 Day's Month")

elif var == 6:
    print("Jun is a 30 Day's Month")

elif var == 7:
    print("July is a 31 Day's Month")

elif var == 8:
    print("August is a 31 Day's Month")

elif var == 9:
    print("September is a 30 Day's Month")

elif var == 10:
    print("October is a 31 Day's Month")

elif var == 11:
    print("November is a 30 Day's Month")

elif var == 12:
    print("December is a 31 Day's Month")

