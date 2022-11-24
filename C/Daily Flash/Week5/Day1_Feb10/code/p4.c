//pattern

#include <stdio.h>

void main() {
	int row;
	
	do {
		printf("Enter rows: ");
		scanf("%d",&row);

		if(row < 0) 
			printf("Enter Positive vlaue only\n");
	}while(row < 0);
	
       	int var;	
	for (int olc = 0; olc< row; olc++) {
		
		var = row-1;
		for(int ilc=0; ilc< row; ilc++) {
			if(ilc+olc >= row-1) {	
				if(ilc+olc == row-1) 
					printf("%d  ", row-1);
				else if(ilc+olc > row-1) {
					printf("%d  ", var*ilc);
				}
				var++;
			}
			else 
				printf("   ");
		}	
	printf("\n");
	}
}
