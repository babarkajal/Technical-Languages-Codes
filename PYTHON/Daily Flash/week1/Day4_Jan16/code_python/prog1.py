
s1 = int(input("Enter side1: "))
s2 = int(input("Enter side2: "))
hypo = int(input("Enter hypotenus: "))

if( hypo*hypo == (s1*s1 + s2*s2) ): 
		print("Triangle satisfies the Pythangorean Theorem\n");
else:
		print("Triangle not satisfies the Pythangorean Theorem\n");
