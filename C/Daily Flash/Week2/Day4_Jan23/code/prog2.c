/*
 rogram 2: Write a Program to Print following Pattern
1
2 3 
4 5 6 
7 8 9 10
*/

#include <stdio.h>

void main () {
	int row, var=1;
	printf("Enter row: ");
	scanf("%d",&row);
	
	for(int olc = 0; olc<row; olc++) {
		
		for(int ilc = 0; ilc<=olc; ilc++) {
			printf(" %d ",var++);
		}
		printf("\n");

	}
}
