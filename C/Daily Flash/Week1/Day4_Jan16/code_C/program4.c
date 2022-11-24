/*
 * Program 4: Write a Program to Print following Pattern
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*
*/

#include<stdio.h>

void main() {
	int row;
	printf("Enter num of rows: ");
	scanf("%d",&row);
		
	int count = 1;
	for(int olc = 0; olc<row ;olc++) {
		for(int ilc = 0; ilc<row ;ilc++) {
			if(count < 10) 
				printf(" %d ",count++);
			else
				printf("%d ",count++);
		}
		printf("\n");
	}

}
