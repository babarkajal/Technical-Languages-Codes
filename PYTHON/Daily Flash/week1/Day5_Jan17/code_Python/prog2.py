#electricy bill


unit = int( input("Enter Electricity bill: "))

if unit < 0:
    print("Unit cannot be negative digit");
    exit(0)

	
if(unit <= 50): 
    print("Electricity bill for unit ", unit , ": ",unit*0.50 , " Rs");

elif( unit > 50 and unit <= 150) :
    print("Electricity bill for unit ", unit ,": ", unit*0.75 , " Rs");

elif(unit > 150 and unit <= 250 ) :
    print("Electricity bill for unit ", unit,": " , unit*1.20 , " Rs");
	
elif(unit > 250):
    print("Electricity bill for unit ", unit ,": ", unit*1.50 , " Rs");
