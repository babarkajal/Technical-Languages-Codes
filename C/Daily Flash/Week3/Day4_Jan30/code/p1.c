/*
 * Program 1: Write a Program to Swap two entered number without using a
third temporary variable.
Input: 10 30
Output:
Before Swap: a = 10 & b = 20
After Swap: a = 20 & b = 10
*/

#include <stdio.h>

void main() {
	int num1, num2;
	printf("enter two num: ");
	scanf("%d%d",&num1,&num2);

	printf("Before Swap\n");
	printf("%d  %d\n",num1,num2);
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("After swaping\n");
	printf("%d  %d\n",num1,num2);


}
