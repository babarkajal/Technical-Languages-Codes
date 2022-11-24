'''
Program 2: Write a Program to take a integer raging between 0 to 6 and print
corresponding weekday
Input: 2
Output: Wednesday.
'''


#take integer value

while True:
    var = int( input("Enter interger value(0-6): "))
    if(var < 0 or var > 6):
        print("Wrong input value!! Enter Again")
        continue
    break
    

if(var == 0):
    print("Monday")
elif( var == 1):
    print("Tuesday")
elif( var == 2):
    print("Wednesday")
elif( var == 3):
    print("Thursday")
elif( var == 4):
    print("Friday")
elif( var == 5):
    print("Saturday")
else:
    print("Sunday")





