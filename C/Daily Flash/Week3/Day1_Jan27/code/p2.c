/*
 * Program 2: Write a Program that accepts Two integers from user and prints
minimum number from them.
Input: 56 99
Output: The Minimum number amongst 56 & 99 is 56
*/
#include <stdio.h>

void main() {
	int num1,num2;
	printf("Enter num1: ");
	scanf("%d",&num1);

	printf("Enter num2: ");
	scanf("%d",&num2);

	num1 < num2 ? printf("%d ",num1): printf("%d ",num2);
	printf("is the minimum among %d and %d\n",num1,num2);


}
