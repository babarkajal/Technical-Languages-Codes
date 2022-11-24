/*
* Program 4: Write a Program that accepts an integer from user and print table
of that number.
Input: 4
Output: 4 8 12 16 20 24 28 36 40
*/

#include <stdio.h>

void main() {
	int num;
	printf("Enter input: ");
	scanf("%d",&num);

	printf("Table of %d\n",num);

	for (int i = 1; i<=10 ;i++) 
		printf("%d  ", num*i);
	printf("\n");
}
