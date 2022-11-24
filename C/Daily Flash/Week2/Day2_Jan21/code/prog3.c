/*
 * Program 3: Write a Program to print table of 2.
Output: 2 4 6 8 10 12 14 16 18 20
*
*/

#include <stdio.h>

void main() {
	printf("Table of 2\n");
	for(int i=1; i<=10; i++)
		printf("%d\t", i*2);
	printf("\n");	
}
