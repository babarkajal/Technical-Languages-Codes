
''' Run this program with python3'''

a =  int(input("Enter Size : "))


if a < 0:
	print("Not allowed");
else :

	for i in range(1 , a * a + 1):
		if i % a == 0 :
			print(i)
		else:
			print(i, end="\t")
