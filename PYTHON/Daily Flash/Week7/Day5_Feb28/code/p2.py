'''
Program 2: Write a Program that calculates diameter of a circle if user provides
circumference of the same circle. {Note: π = 3.142}
Input: Circumference of circle = 25.13
Output: Diameter of that circle is 10
'''

cir = float(input("Enter circumference: "))

print("The Diameter of the circle: {0:.2}".format( 2*(cir/(2*3.14))) )
