/*
 * Program 2: Write a Program that accepts an integer from user and prints its
second successor and second predecessor.
Input: 50
Output:
Second Predecessor: 48
Second Successor: 52
*
*/
#include <stdio.h>


void main() {
	int num;
	//take input from user
	printf("Enter number: ");
	scanf("%d",&num);

	printf("Second Predecessor : %d\n",num-2);
	printf("Second Successor : %d\n",num+2);
}
