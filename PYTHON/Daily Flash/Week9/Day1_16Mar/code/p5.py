'''
Program 5: Write a Program that computes radius of a In-circle inside a triangle if user enters the vertices of all three points of that triangle.
{Steps:
1. Calculate Radius R of an In-Circle enclosed under Triangle using Heron’s formula :
R = (A / P)
Where,
- A is Area of that triangle
- P is semi-perimeter of Triangle }
Input:
A (x1, y1) = 5 2
B (x2, y2) = 6 3
C (x3, y3) = 3 1
Output:
Length AB = 1.41
Length BC = 3.60
Length AC = 2.23
Perimeter of Triangle = 7.24
Semi-Perimeter of Triangle = 3.62
Area of Triangle = 0.4716
Radius of In-circle = 0.1302
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

perimeter = AB + BC+ AC
s = perimeter /2
area = math.sqrt (s*(s-AB)*(s-BC)*(s-AC))

Radius =area/s

print("Perimeter circle",perimeter)
print("Semi-perimeter of circle",s)
print("Area of Circle",area)
print("Radius of In-circle",Radius)

