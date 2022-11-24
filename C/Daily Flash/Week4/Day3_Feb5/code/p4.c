/*
 *Program 4: Write a Program to Print following Pattern.
a b c d
c d e
e f
g
*/
#include <stdio.h>

void main() {
	// take row from user
	int row;
	
	//external var to print char
	char ch;

	//condition to check positive value
	do { 
		printf("Enetr row: ");
		scanf("%d", &row);

		if( row < 0)
			printf("Enter positive  value only\n");
	}while(row < 0);
	
	for (int olc=0; olc< row; olc++) {

		//increment char by two
		ch = 'a' + 2*olc;
		for (int ilc=0 ; ilc+olc < row; ilc++) {
				printf("%c ",ch);

				//inc ch to print next character
				ch++;
		}
		printf("\n");
	}

}
