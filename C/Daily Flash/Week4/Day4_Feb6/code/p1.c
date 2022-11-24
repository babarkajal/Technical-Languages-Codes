/*
 * Program 1: Write a Program to print Fibonacci Series of N elements. Where n is
a number entered by user.
Output: 0 1 1 2 3 5 8 13 21 34
*/


#include <stdio.h>

void main() {
	//take number from user
	int range, sum;
	printf("Enter limit for fibonacci series: ");
	scanf("%d",&range);
	int num1 = 0;
	int num2 = 1;
	printf("%d  %d  ", num1 ,num2);
	for(int i=0; i<range-2; i++) {
		sum = num1+num2;
		printf("%d  ", sum);
		num1 = num2;
		num2 = sum;

	}
	printf("\n");
}

