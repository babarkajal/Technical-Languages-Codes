
print ("Enter Side1 Side2  Hypotenus ")

try :
	a,b,c = [int(x) for x in raw_input().split()]

	if(a > 0 and b > 0 and c > 0):
		if(a * a + b * b == c * c):
			print("Triangle satisfies Pythagoras Theorem")
		else:
			print("Triangle does not satisfy Pythagoras Theorem")
	
	else :
		print("Sides are not allowed")
	
except ValueError :
	print("Wrong input")
	pass
