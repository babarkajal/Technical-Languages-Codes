/*
 * Program 3: Write a Program to Convert enter distance in feet to centimetres.
Input: Distance in Feet: 6ft
Output: Equivalent distance for 6ft in cm is 180cm.
*
*/

#include <stdio.h>


void main() {
	int feet;
	printf("Enter distance in feet: ");
	scanf("%d", &feet);

	printf("Equivalent distance for %dft in cm is %d cm\n",feet, feet*30);

}
