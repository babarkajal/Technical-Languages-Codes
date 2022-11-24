/*
 * Program 2 : Write a Program to print Sum of First 10 Natural Numbers.
Output: The s um of First 10 Natural Numbers : 55
*
*/
#include <stdio.h>

void main() {

	
	int sum = 0;
	
	for(int i=1 ;i <= 10 ;i++)
		sum += i;

	printf("Sum of first 10 integers = %d\n",sum);
}
