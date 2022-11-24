import math

a,b,c = (int(i) for i in  input("Enter values of a,b,c: ").split()) 


root1 = (-b+math.sqrt(b**2 - (4*a*c)) )/ 2*a
root2 = (-b-math.sqrt(b**2 - (4*a*c)) )/ 2*a
print("value of root1: ",root1)
print("value of root2: ",root2)
