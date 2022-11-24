'''
Program 5: Write a Program that accepts all three points of a triangle from
user and computes any of the operation listed in menu, if user provides the
option associated with key.
Menu:
1: Calculate Distances of each side of Triangle
2: Calculate Perimeter of Triangle
3: Area of Triangle
4: Radius of In-Circle to be drawn inside the Triangle.
5: Centre of in-circle enclosed under triangle
{E.g. user enters 2: Display the Perimeter of Triangle}
Input:
A (x1, y1) = 5 2
B (x2, y2) = 6 3
C (x3, y3) = 3 1
Press Key to Choose Operation: 3
Output:
Area of Triangle = 0.4716
'''
import math
x1,y1 = ( int(i)  for i in input("Enter coordinates of point 1: ").split())
x2,y2 = ( int(i)  for i in input("Enter coordinates of point 2: ").split())
x3,y3 = ( int(i)  for i in input("Enter coordinates of point 3: ").split())


A = math.sqrt((x2-x1)**2 + (y2-y1)**2)
B = math.sqrt((x3-x2)**2 + (y3-y2)**2)
C = math.sqrt((x3-x1)**2 + (y3-y1)**2)

perimeter = A + B+ C
s = perimeter /2
area = math.sqrt (s*(s-A)*(s-B)*(s-C))
Radius =area/s

X = ((B*x1) + (C*x2) + (A*x3) )/ perimeter
y =( (B*y1) + (C*y2) + (A*y3)) / perimeter




while True:
    print('**************** OPERATIONS *****************')
    print('\n1.Calcultae distance of each side of triangle:\n2: Calculate Perimeter of Triangle')
    print('3: Area of Triangle')
    print('4: Radius of In-Circle to be drawn inside the Triangle.')
    print('5: Centre of in-circle enclosed under triangle')
    print('6:Quit')
    
    print('\nEnter operation: ')
    choice = int(input())

    if choice == 1:

            print("Length of AB ={:.2}".format(A) )
            print("Length of BC ={:.2}".format(B) )
            print("Length of AC ={:.2}".format(C) )
    
    if choice == 2:
            print("Perimeter circle: {0:.2f}".format(perimeter))
    if choice == 3:
            print("Area of Circle: {0:.2f}".format(area))
            
    if choice == 4:
            print("Radius of In-circle",Radius)

    if choice == 5:
            print("Center of  in-circle enclosed under triangle: %.2f , %.2f"%(X,y))
        
    if choice == 6:
            break



        
