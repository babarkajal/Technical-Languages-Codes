//program 5 : to print pattern 

#include <stdio.h>

void main() {
	// take row from user
	int row;
	

	//condition to check positive value
	do { 
		printf("Enetr row: ");
		scanf("%d", &row);

		if( row < 0)
			printf("Enter positive  value only\n");
	}while(row < 0);
	
	for (int olc=0; olc< row; olc++) {
	
		for (int ilc=0; ilc < row ; ilc++) {

			if(ilc+olc >= row-1)
				printf("%d ", ilc+1);
			else 
				printf("  ");
		}
		printf("\n");
	}
}
