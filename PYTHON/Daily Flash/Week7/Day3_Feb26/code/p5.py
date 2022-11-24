'''
Program 5: Write a Program calculates mid-point of a line made up of two
points where user provides the two points.
Input:
Enter Point A (x1, y1) = 4 5
Enter Point B (x2, y2) = 2 4
Output: Mid-Point of Line AB = (3, 4.5)
'''


x1,y1 = ( int(i)  for i in input("Enter first coordinates of point1: ").split())
x2,y2 = ( int(i)  for i in input("Enter second coordinates of point2: ").split())

print("Mid-point of line = (" , (x1+x2)/2,", " ,(y1+y2)/2,")")


