/*Program 2: Write a Program that calculates radius of a circle if user provides
the area covered by that circle.
Input: Area of Circle 50.27
Output: Radius of circle is 4
*/

#include <stdio.h>
#define PI 3.142
void main() {
	float circumference;
	printf("Enter Circumference: ");
	scanf("%f",&circumference);
	
	int radius = circumference/(2*PI);
       	printf("The radius of circle: %d\n", radius);	
}
