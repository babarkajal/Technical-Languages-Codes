/*Program 1: Write a Program to calculate area of circle.
 * */

#include <stdio.h>

#define PI 3.14
void main() {
	
	int radius;
	printf("Enter the radius of circle: ");	
	scanf( "%d" , &radius);		//take radius

	float area = PI * radius *radius;

	printf("Area of circle: %f\n",area);
}
