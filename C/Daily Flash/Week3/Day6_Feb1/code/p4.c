

#include <stdio.h>


void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d",&row);

	for(int olc= 0; olc<row; olc++) {
		for(int ilc=0; olc+ilc< row ; ilc++) {
			if(ilc%2==0) 
				printf(" + ");
			else
				printf(" = ");
		}
		printf("\n");
	}


}
