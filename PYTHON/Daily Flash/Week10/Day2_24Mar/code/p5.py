'''
Program 5: Write a Program that takes Height (h) & Base (b) of a Triangle and
calculates area (A) of that Triangle.
{Steps: To Calculate Area of Triangle, we can use formula:
A = 1/2bh
Where:
A is area of triangle
b is base of that triangle
h is height of that triangle
}
Input:
Enter Height of Triangle: 3
Enter Base of Triangle : 4
Output: The Area of Triangle is : 6
'''
height = int(input('Enter Height of the triangle: '))
base = int(input('Enter Base of the triangle: '))

area= 1/2*height * base

print('The area of the triangle: ',area)
