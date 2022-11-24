/*
 * Program 3 : Write a Program to print First 50 Odd Numbers .
Output: 1 3 5 . . . 99
*
*/

#include <stdio.h>

void main() {

	printf("First 50 odd Numbers:\n");
	int num =1;

	for(int i=1; i<= 50; i++){
		printf("%d ",num);
		num +=2;
	}
	printf("\n");
}
