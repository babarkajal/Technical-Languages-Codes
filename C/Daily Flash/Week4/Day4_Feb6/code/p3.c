/*
 * rogram 3: Write a Program to that accepts 10 integers from user and breaks
the loop of accepting numbers if user enters a negative number.
{Note: Use Break Statement}
Input: 1 2 3 4 -6
Output: Negative Number Entered, Exiting The Loop!
*
*/

#include <stdio.h>

void main() {
	
	int num;
	//accpet 10 integers from user
	printf("Enter 10 numbers: \n");
	for(int i=1; i<=10; i++) {
		scanf("%d", &num);

		//break the loop when negative value encountered 
		if(num < 0)
			break;
	}
	
}
