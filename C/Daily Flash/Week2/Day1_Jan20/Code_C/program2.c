/*
 * Program 2 : Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The s um number up to 10 : 55
*
*/
#include <stdio.h>

void main() {
	
	int num,sum = 0;
	printf("Enter num: ");
	scanf("%d",&num);

	for(int i = 1; i<=num; i++)
		sum += i;

	printf("the sum up to %d : %d\n",num , sum );
}
