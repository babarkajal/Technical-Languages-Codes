/*
 * Program 3: Write a Program to Convert the entered distance in Kilometre by
user into meter.
Input: Enter Distance in KM: 1
Output: 1 KM is equal to 1000m
*
*/

#include <stdio.h>

void main() {
	int distance;
	printf("Enter distance in KM: ");
	scanf("%d", &distance);

	printf("%d KM is equal to %dm\n", distance , distance*1000);
}
