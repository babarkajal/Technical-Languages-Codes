/*
 * Program 3: Write a Program to find radius of a circle if user provides
circumference of that same circle.
Input: Circumference of circle: 251.36
Output: The Radius of the circle is: 40
*
*/

#include <stdio.h>
#define PI 3.142
void main() {
	int radius;
	float cir;
	printf("Enter circumference: ");
	scanf("%f",&cir);
	
	radius = cir/ (2*PI);
	printf("The radius of the circle : %d\n",radius);
	
}
