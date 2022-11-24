/*
*Program 2: Write a Program to that prints series of Even numbers in reverse
order from the limiting number entered by user.
Input: 100
Output: 100 98 96 . . .. 0
*/
#include <stdio.h>

void main() {
	int num;
	printf("Enter limit for series of odd num: ");
	scanf("%d",&num);

	for(int lc= num; lc>=0; lc--) {
		if(lc%2 ==  0) 
			printf("%d ", lc);
	}
	printf("\n");

}
