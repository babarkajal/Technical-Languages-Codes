/*
 * Program 5: Write a Program that accepts Three integers from user and prints
maximum number from them.
Input: 56 7 99
Output: The Maximum number amongst 56 7 & 99 is 99
*/


#include <stdio.h>

void main() {
	int num1, num2, num3;
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	printf("Enter num3: ");
	scanf("%d",&num3);

	num1 > num2 ? (num1 > num3 ? printf("%d", num1): printf("%d", num3)) : (num2 > num3 ? printf("%d", num2): printf("%d", num3));
	printf(" is maximun among %d, %d and %d\n",num1 , num2, num3);
}
