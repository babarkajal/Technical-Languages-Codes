/*
 * Program 4: Write a Program to Print following Pattern.
1
8 27 
64 125 216
343 512 729 1000
*/
#include<stdio.h>

void main() {
	int var = 1;
	int row;
	printf("Enter rows: ");
	scanf("%d",&row);

	for(int olc=0; olc<row ;olc++)  {
		for(int ilc=0; ilc<=olc ;ilc++)  {
			printf("%d ", var*var*var);
			var++;
		}
		printf("\n");
	}

}
