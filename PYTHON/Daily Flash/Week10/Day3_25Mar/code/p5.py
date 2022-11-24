'''
Program 5: Write a Program that takes Area (A) & Base (b) of a Triangle and
calculates height (h) of that Triangle.
{Steps: To Calculate Area of Triangle, we can use formula:
H = 2A/b
Where:
A is area of triangle
b is base of that triangle
h is height of that triangle
}
Input:
Enter Area of Triangle: 6
Enter Base of Triangle : 4
Output: The Area of Triangle is : 3
'''

area = int(input('Enter area of the triangle: '))
base = int(input('Enter Base of the triangle: '))

heigth= 2*area/base

print('The heigth of the triangle: ',heigth)

