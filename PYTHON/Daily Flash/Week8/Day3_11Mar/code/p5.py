'''
Program 5: Write a Program calculates length of all three sides of a triangle if
user provides the three points that triangle bound in.
{Note: Use Distance formula for computing the distances.}
Input:
A (x1, y1) = 5 2
B (x2, y2) = 6 3
C (x3, y3) = 3 1
Output:
Length AB = 1.41
Length BC = 3.60
Length AC = 2.23
'''
import math
x1,y1 = ( int(i)  for i in input("Enter coordinates of point 1: ").split())
x2,y2 = ( int(i)  for i in input("Enter coordinates of point 2: ").split())
x3,y3 = ( int(i)  for i in input("Enter coordinates of point 3: ").split())

AB = math.sqrt((x2-x1)**2 + (y2-y1)**2)
BC = math.sqrt((x3-x2)**2 + (y3-y2)**2)
AC = math.sqrt((x3-x1)**2 + (y3-y1)**2)

print("Length of AB ={:.2}".format(AB) )
print("Length of BC ={:.2}".format(BC) )
print("Length of AC ={:.2}".format(AC) )
