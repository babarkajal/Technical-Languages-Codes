/*
 * Enter rows: 4
      A
    B A
  C B A
D C B A

*/

#include <stdio.h>

void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d",&row);
	char ch;
	for(int olc=0; olc<row; olc++) {
		ch = 65 + olc;
		for(int ilc=0;ilc<row; ilc++) {

			if(olc+ilc >=row-1) {
				printf("%c ",ch);
				ch--;
			}

			else
				printf("  ");
		}
		printf("\n");
	}


}
