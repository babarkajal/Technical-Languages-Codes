'''
Program 5: Write a Program that computes height (h) of triangle if user
provides co-ordinates (x, y) of all three points of that triangle.
{Steps: we can use heron’s formula that computes area of triangle using
formula given below
A = √(s(s-a)(s-b)(s-c))
Where,
A = 1/2bh, (b is base, h is height)
S = Semi-Perimeter of triangle
a, b, c = are the distances of all three sides of triangle
}
Input:
A (x1, y1) = 5 2
B (x2, y2) = 6 3
C (x3, y3) = 3 1
Output : height (h) of the triangle = 0.62
'''

import math
x1,y1=(int(i) for i in input("Enter coordinates of first point: ").split(" "))
x2,y2=(int(i) for i in input("Enter coordinates of first point: ").split(" "))
x3,y3=(int(i) for i in input("Enter coordinates of first point: ").split(" "))

d1 = math.sqrt( (x2-x1)**2 + (y2-y1)**2)
d2 = math.sqrt( (x3-x2)**2 + (y3-y2)**2)
d3 = math.sqrt( (x3-x1)**2 + (y3-y1)**2)

#semiperimeter
s = (d1+d2+d3)/2

area= math.sqrt(s*(s-d1)*(s-d2)*(s-d3))

#consider d2 as a base 
base = d3
height = (2*area)/base
print('Height of the trianle: {0:.2f}'.format(height))




