/*
*Program 4 : Write a Program to print First 50 Even Numbers
Output: 2 4 6 . . . 100
*
*/

#include <stdio.h>

void main() {

	printf("First 50 EVEN Numbers:\n");
	int num =0;

	for(int i=1; i<= 50; i++){
		printf("%d ",num);
		num +=2;
	}
	printf("\n");
}
