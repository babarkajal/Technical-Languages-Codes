/*
 * Program 3: Write a Program to Convert the Hours entered by user into
Seconds.
Input: 1hr
Output: 3600 seconds
*/
#include <stdio.h>

void main() {
	int hrs;
	printf("Enter hours: ");
	scanf("%d",&hrs);
	printf("%d hrs = %d seconds\n", hrs, hrs*60*60);

	
}
