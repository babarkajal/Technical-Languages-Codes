/*
 * Program 4: Write a Program to Print following Pattern
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8
*
*/

#include <stdio.h>

void main () {
	int row;
	printf("Enter rows for pattern :");
	scanf("%d",&row);
	int num;

	for(int olc=0; olc< row ;olc++) {
		num = 2;
		for(int ilc=0; ilc< row ;ilc++) {
			printf(" %d ", num);
			num +=2;
		}
		printf("\n");
	}


}
