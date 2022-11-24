/*
 * Program 1: Write a Program to that prints series of odd numbers in reverse
order from the limiting number entered by user.
Input: 100
Output: 99 97 95 93 . . .. 1
*
*/
#include <stdio.h>

void main() {
	int num;
	printf("Enter limit for series of odd num: ");
	scanf("%d",&num);

	for(int lc= num; lc>=1; lc--) {
		if(lc%2!= 0) 
			printf("%d ", lc);
	}
	printf("\n");

}
