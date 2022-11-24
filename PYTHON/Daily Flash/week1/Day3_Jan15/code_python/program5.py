'''
Program 5: Write a Program that takes angles of a triangle from user and print
whether that triangle is valid or not.
{Note: Addition of angles of triangle has to be 180 in order to consider it as a
valid one}
Input: 30 60 70
Output: The triangle with angles 30 60 & 70 is a invalid one
'''
print("Enter angles of triangle: ")
s1 = int( input("Enter angle 1: ") )
s2 = int( input("Enter angle 1: ") )
s3 = int( input("Enter angle 1: ") )

if s1+s2+s3 == 180:
        print("The triangle with angles ", s1 , s2 , ', ' , "& " , s3 ,' is  valid ')
else:
        print("The triangle with angles ", s1 , s2 , ', ' , "& " , s3 ,' is  invalid ')
