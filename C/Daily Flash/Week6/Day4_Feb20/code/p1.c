/*
 * Program 1: Write a Program that computes Cartesian space value of a point
P(x, y) if user provides that radius and angle of that point in Polar coordinates
space.
{Note: Considered 2D polar space then x & y values for Cartesian space
computed as, x = r * cos (θ) & y = r * sin (θ)}
Input: Angle = 30 & Radius: 3
Output: X = 2.59 & y = 1.5
*
*/

#include <stdio.h>
#include <math.h>


int main() {
	
	int angle , radius;
	float x,y;

	printf("Enter coordinates(angle and radius): ");
	scanf("%d",&angle);
	scanf("%d",&radius);

	x = radius*cos(angle);
	y = radius*sin(angle);
	printf("X= %f and y = %f\n", x,y);
}
