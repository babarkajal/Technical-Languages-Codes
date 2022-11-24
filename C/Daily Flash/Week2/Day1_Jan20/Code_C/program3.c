/*
 * Program 3 : Write a Program that accepts a n inte ger from user and prints
whether that number is odd or even .
Input: 2
Output: 2 is an Even Number
*
*/

#include <stdio.h>

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	if(num%2 == 0)
		printf("%d is an Even number\n",num);
	else
		printf("%d is an odd number\n",num);
}
