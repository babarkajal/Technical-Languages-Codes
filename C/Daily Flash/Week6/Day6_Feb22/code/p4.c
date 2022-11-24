/*
 */
#include <stdio.h> 

void main() {
	int row;	
	printf("ENter rows: ");
	scanf("%d",&row);
	
	for(int olc=0; olc<row; olc++) {
		for(int ilc=0; ilc< row; ilc++) {
			if(ilc >=olc) {
				printf("%d%d  ", olc,ilc);
			}
			else {
				printf("    ");
			}
		}
		printf("\n");
	}	
}

