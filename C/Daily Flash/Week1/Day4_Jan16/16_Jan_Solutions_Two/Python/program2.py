
try:
	a = int(raw_input("Enter Principal Amount : "))
	b = float(raw_input("Enter Rate of Interest : "))
	c = int(raw_input("Enter Number of Years : "))

	if(a > 0 and b > 0 and c > 0 and b <= 100):
		print("Simple Interest :{} ".format((a * b * c)/100));

	
	else:
		print("Values are wrong");

except ValueError :
	print("wrong input")
	pass