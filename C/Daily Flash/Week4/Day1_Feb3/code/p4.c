/*
 * Program 4: Write a Program to Print following Pattern.
A C E G
B D F
C E
D
*/

#include <stdio.h>


void main() {
	int row;
	do {
		printf("Enter row: ");
		scanf("%d", &row);

		if(row < 0) 
			printf("ENter non-negative value\n");
	}while(row < 0);

	char ch;
	for(int olc=0 ; olc<row; olc++) {
		ch = 'A'+olc;
		for(int ilc=0; ilc+olc < row ; ilc++){
			printf("%c ", ch);
			ch +=2;
		}
		printf("\n");
	}

}
