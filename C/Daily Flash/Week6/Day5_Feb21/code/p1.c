/*Program 1: Write a Program that computes Cartesian space value of a point
P(x, y, z) if user provides that radius, angle theta (θ) & angle phi (φ) of that
point in Polar coordinates space.
{Note: Considered 3D polar space then x, y, & z values for Cartesian space
computed as, x = r * sin (θ) * cos (φ), y = r * sin (θ) * sin (φ) & z = r * cos (θ)}
Input: θ = 30, φ = 45 & r = 3
Output: X = 0.707, y = 0.707 & Z = 0.866
*/

#include <stdio.h>
#include <math.h>

void main() {
	int radius , theta, phi;
	printf("Enter radius: ");
	scanf("%d",&radius);
	
	printf("Enter theta angle: ");
	scanf("%d",&theta);
	
	printf("Enter phi angle: ");
	scanf("%d",&phi);

	float x,y,z;
	x = radius * sin(theta) * cos(phi);
	y = radius * sin(theta) * sin(phi);
	z = radius * cos(theta);

	printf("x= %f\ty=%f\tz=%f\n",x,y,z);

}
