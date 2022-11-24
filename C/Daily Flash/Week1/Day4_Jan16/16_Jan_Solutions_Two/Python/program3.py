
try:

	c = int(raw_input("Enter Year : "))

	if(c > 0 and c % 400 == 0 and c % 100 == 0):
		print("Leap Year")
	
	elif (c > 0 and c % 4 == 0 and c % 100 != 0):
		print("Leap Year")
	
	elif(c <= 0):
		print("not Valid Entry For Year")
	
	else :
		print("Not Leap Year")
	

except ValueError :
	print("wrong input")
	pass
