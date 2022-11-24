/*Program 1: Write a Program to Print following Pattern
1
2 2 
3 3 3
4 4 4 4*/

#include <stdio.h>

void main () {
	int row;
	printf("Enter row: ");
	scanf("%d",&row);
	
	for(int olc = 0; olc<row; olc++) {
		for(int ilc = 0; ilc<=olc; ilc++) {
			printf(" %d ",olc+1);
		}
		printf("\n");
	}
}
