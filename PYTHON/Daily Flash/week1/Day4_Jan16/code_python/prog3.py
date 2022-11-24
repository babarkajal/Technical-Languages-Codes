year = int(input("Enter year: "))

if(year % 4==0):
	print("Leap year!!!");

elif(year%400==0 and year %100 == 0):
        print("Leap year!!!");
else:
	print("Not Leap year!!!");
