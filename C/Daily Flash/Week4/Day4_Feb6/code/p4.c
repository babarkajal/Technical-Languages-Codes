
#include <stdio.h>

void main() {
	int row;
	int ch;
	do {
		printf("Enter rows: ");
		scanf("%d",&row);

		if(row < 0) 
			printf("Enter non-negative value only\n");
	}while(row < 0);

	for (int olc=0; olc< row; olc++) {
		
		//initialise variable to the 'A'
		ch = 'A';
		for (int ilc =0 ; ilc<row;ilc++) {
			if(olc+ilc >= row-1)
				printf("%c ", ch++);
			else
				printf("  ");
		}
		printf("\n");
	}


}
