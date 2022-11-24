'''
Program 5: Write a Program calculates slope of a line if user provides the Two
Points A & B of that line.
{Note: Slope of a line is computed as m = ((y2-y1)/(x2-x1)) }
Input:
Point A (x1, y1) = 5 2
Point B (x2, y2) = 8 1
Output: Slope of line AB is 3
'''

x1,y1 = ( int(i)  for i in input("Enter first coordinates of point1: ").split())
x2,y2 = ( int(i)  for i in input("Enter second coordinates of point2: ").split())

print("Slop of the line: " , (y2-y1)/(x2-x1))
