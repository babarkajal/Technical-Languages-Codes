/*
 * Program 4: Write a Program to Print following Pattern.
A3
D3
B3 A4
C3 B4 A5
C4 B5 A6
*/

#include <stdio.h>

void main() {
	int row;
	do {
		printf("Enter rows: ");
		scanf("%d",&row);
		if(row < 0)
			printf("Enter the non-negative value\n");
	}while(row < 0);
	
	char ch;
	for(int olc=0; olc<row; olc++) {

		//assign the ch to the A,B,C,D as per the row
		ch = 65+olc; 

		for(int ilc=0; ilc<row; ilc++) {
			if(olc+ilc >= row  - 1 ){
				printf("%c%d  ",ch, ilc+olc);			
				ch--;	
			}
			else
				printf("    ");
		}
		printf("\n");
	}

}
