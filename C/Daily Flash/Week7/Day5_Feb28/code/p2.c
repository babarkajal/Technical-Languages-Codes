/*
 * Program 2: Write a Program that calculates diameter of a circle if user provides
circumference of the same circle. {Note: π = 3.142}
Input: Circumference of circle = 25.13
Output: Diameter of that circle is 10
*
*/

#include <stdio.h>
#define PI 3.142
void main() {
	float circumference;
	printf("Enter Circumference: ");
	scanf("%f",&circumference);
	
	int diameter = 2* (circumference/(2*PI));
       	printf("The diameter of circle: %d\n", diameter );	
}

