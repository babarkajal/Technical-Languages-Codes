
try:

	phy, chem, math, bio, comp = [float(x) for x in raw_input().split()]

	if(phy < 0 or chem < 0 or bio < 0 or math < 0 or comp < 0 or
			phy > 100 or chem > 100 or bio > 100 or math > 100 or comp > 100 ):
		
		print("marks entered negative or greater than 100")
		exit(0)
	
	
	per = (phy + chem + math + bio + comp) / 5
	print("Percentage : {}".format(per))

	if(per >= 90):
		print("Grade A")
	
	elif(per >= 80):
		print("Grade B")
	
	elif(per >= 70):
		print("Grade C")
	
	elif(per >= 60):
		print("Grade D")
	
	elif(per >= 40):
		print("Grade E")
	
	else :
		print("Grade F")

except ValueError :
	print("wrong input")
	pass
