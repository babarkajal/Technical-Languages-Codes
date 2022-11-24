'''
Program 5: Write a Program calculates Distance between two points of a line,
if user provides Point A & Point B of that line.
{Note: Distance of a line is computed as d(line) =√(x2-x1) 2 + (y2-y1) 2 }
Input:
Point A (x1, y1) = 5 1
Point B (x2, y2) = 8 1
Output: Distance d(AB) = 3
'''
import math
x1,y1 = ( int(i)  for i in input("Enter coordinates of point 1: ").split())
x2,y2 = ( int(i)  for i in input("Enter coordinates of point 2: ").split())

AB = math.sqrt((x2-x1)**2 + (y2-y1)**2)

print("Distance of AB ={:.2}".format(AB) )
