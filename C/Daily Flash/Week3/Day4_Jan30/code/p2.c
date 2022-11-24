/*
 * Program 2: Write a Program that calculates Kinetic Energy of object with given
Mass & Velocity.
{Note: K.E. = 1⁄2 * m * v * v }
Input: Mass = 53kg
Velocity = 5m/s
Output: Kinetic Energy of that Object is: 662.5
*/

#include <stdio.h>

void main() {
	int mass, velocity;

	/*take mass and velocity from user
	 */
	printf("Enter mass: ");
	scanf("%d",&mass);

	printf("Enter velocity: ");
	scanf("%d",&velocity);
	
	float KE ;
	(mass >=0 && velocity >=0) ? (KE= 0.5 * mass*velocity*velocity) : (printf("Invalid data!!!\n"), exit(0));
	printf("Kinetic Engery: %.2f\n", KE);

}
