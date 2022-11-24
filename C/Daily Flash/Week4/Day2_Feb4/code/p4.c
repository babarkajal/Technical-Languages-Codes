/*
 * Program 4: Write a Program to Print following Pattern.
7 14 21 28
35 42 49
56 63
70
*/

#include <stdio.h>

void main() {
	int row; 
	
	do {
		printf("Enter rows: ");
		scanf("%d: ", &row);

		if(row < 0)
			printf("Please enter valid rows\n");
	}while(row < 0);

	int stop = row, inc=1;

	for(int olc=1; olc <= stop; olc++) {
		printf("%d ", 7*inc);
		
		if(olc==stop) {
			printf("\n");
			olc=0;
			stop--;
		}
		inc++;

	}	



}
