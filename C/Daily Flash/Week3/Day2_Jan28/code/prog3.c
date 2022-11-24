/*
 * Program 3: Write a Program to Implement Ohms Law.
{Note: V = I*R, where, v is voltage, I is current & R is resistance}
Input:
I = 10 amp
R = 5
Output: Voltage V = 50.
*/

#include <stdio.h>

void main() {
	int current, resistance , voltage;
	printf("Enter current: ");
	scanf("%d", &current);

	printf("Enter resistance: ");
	scanf("%d", &resistance);
	
	voltage = current * resistance;
	printf("Voltage: %d V\n",voltage);
}
