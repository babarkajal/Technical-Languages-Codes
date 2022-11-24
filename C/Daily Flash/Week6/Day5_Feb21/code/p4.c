
#include <stdio.h>

void main() {
	/*
	int row;
	printf("Enter row: ");
	scanf("%d",&row);
	*/

	char name[]= {'C','O','R','E'};
	for(int olc=0; olc<4; olc++) {
		for(int ilc=0; ilc<4; ilc++) {
			if(ilc >= olc) {
				printf("%c ", *(name+ilc));
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

}
