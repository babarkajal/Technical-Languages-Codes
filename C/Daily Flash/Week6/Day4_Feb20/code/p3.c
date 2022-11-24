/*
 * Program 3: Write a Program to print AP in reverse order take last Element &
Common Difference from user.
{Note: Use While Loop}
Input:
Last Element In AP: 40
Common Difference: 8
Output: 40 32 24 16 8
*
*/
#include <stdio.h>

void main() {
	int last,diff, no;
	printf("Enter last elements in AP: ");
	scanf("%d",&last);
	printf("Enter No of elements: ");
	scanf("%d",&no);

	printf("Enter diff: ");
	scanf("%d",&diff);

	printf("AP in reverse: \n");
	for(int i=1; i<=no; i++) {
		printf("%d  ", last);
		last = last - diff;
	}
	printf("\n");
}
