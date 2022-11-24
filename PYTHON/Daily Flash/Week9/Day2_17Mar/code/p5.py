'''
Program 5: Write a Program that computes Centre (x, y) of In-circle inside a
triangle if user enters the vertices of all three points of that triangle.
{Steps:
1. Calculate centre(x,y) of an In-Circle enclosed under Triangle using
Heron’s formula :
X = (b*x1) + (c*x2) + (a*x3) / P
y = (b*y1) + (c*y2) + (a*y3) / P
Where,
- a, b, c are the distances of triangle ABC and
a = d (A, B)
b = d (B, C)
c = d (C, A)
Where A = (x1, y1), B = (x2, y2), C = (x3, y3)
- P is perimeter of Triangle
}
Input:
A (x1, y1) = 5 2
B (x2, y2) = 6 3
C (x3, y3) = 3 1
'''

import math
x1,y1 = ( int(i)  for i in input("Enter coordinates of point 1: ").split())
x2,y2 = ( int(i)  for i in input("Enter coordinates of point 2: ").split())
x3,y3 = ( int(i)  for i in input("Enter coordinates of point 3: ").split())


A = math.sqrt((x2-x1)**2 + (y2-y1)**2)
B = math.sqrt((x3-x2)**2 + (y3-y2)**2)
C = math.sqrt((x3-x1)**2 + (y3-y1)**2)

print("Length of AB ={:.2}".format(A) )
print("Length of BC ={:.2}".format(B) )
print("Length of AC ={:.2}".format(C) )

perimeter = A + B+ C
s = perimeter /2
area = math.sqrt (s*(s-A)*(s-B)*(s-C))


print("Perimeter circle: {0:.2f}".format(perimeter))
print("Semi-perimeter of circle: {0:.2f}".format(s))
print("Area of Circle: {0:.2f}".format(area))
X = ((B*x1) + (C*x2) + (A*x3) )/ perimeter
y =( (B*y1) + (C*y2) + (A*y3)) / perimeter

print("Coorinates of the triangle of the in-circle: %.2f , %.2f"%(X,y))

