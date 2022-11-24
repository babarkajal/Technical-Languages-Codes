'''
Program 5: Write a Program that takes Area (A) & Height (h) of a Triangle and
calculates Base (b) of that Triangle.
{Steps: To Calculate Area of Triangle, we can use formula:
b = 2A/h
Where:
A is area of triangle
b is base of that triangle
h is height of that triangle
}
Input:
Enter Area of Triangle: 6
Enter Height of Triangle: 3
Output: The Base of Triangle is: 4
'''

area = int(input('Enter area of the triangle: '))
height = int(input('Enter heigth of the triangle: '))

base = 2*area/height

print('The heigth of the triangle: ',base)
