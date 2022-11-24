/*
 * Program 2: Write a Program that takes rupees as input from user and convert
them into dollars.
*
*/
#include <stdio.h>

void main() {
	int rupees;
	printf("Enter rupees: ");
	scanf("%d",&rupees);

	float doller = 0.014 * rupees;
	printf("Dollers: %.3f\n", doller);
}
