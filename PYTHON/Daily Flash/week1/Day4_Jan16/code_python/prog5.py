
marks = []
sumOfMarks = 0

for var in range(5):
    n = int(input("Enter marks  subject "+str(var+1)+" (Out of 100): "))
    sumOfMarks += n
    marks.append(n)
    
#print(marks)

per = sumOfMarks / 500.00 *100

if(per >= 90):
		print("Percentage :",per," Grade A");
elif(per >=80 ):
		print("Percentage :",per," Grade B");
elif(per >=70 ):
		print("Percentage :",per," Grade C");
elif(per >=60 ):
		print("Percentage :",per," Grade D");
elif(per >=40 ):
		print("Percentage :",per," Grade E");
else:
		print("Percentage :",per," Grade F");

