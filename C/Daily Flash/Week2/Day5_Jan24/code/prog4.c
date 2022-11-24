/*
 * Program 4: Write a Program to Print following Pattern.
0
1 1 
0 0 0 
1 1 1 1
0 0 0 0 0
*/
#include<stdio.h>
void main() {
	int row;
	printf("Enter row num: ");
	scanf("%d",&row);

	for(int olc=0; olc<row; olc++) {
			for(int ilc=0; ilc<=olc; ilc++) {
				if(olc%2==0)
					printf(" 0 ");
				else
					printf(" 1 ");
			}
			printf("\n");
	}

}
