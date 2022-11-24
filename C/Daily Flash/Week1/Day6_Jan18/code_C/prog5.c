/*
 * Program 5 : Write a Program to print following Pattern.
Output :
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
*
*/
#include <stdio.h>

void main() {
	int row;
	printf("Enter row: " );
	scanf("%d",&row);

	for(int olc = 0 ;olc < row; olc++) {
		for(int ilc = 0; ilc < row ; ilc++)
			printf(" 0 ");
		printf("\n");
	}
}
