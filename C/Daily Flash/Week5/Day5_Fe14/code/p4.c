/*
 *    #
    # *
  # * *
# * * *

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
	
	for(int olc=0; olc<row; olc++) {


		for(int ilc=0; ilc<row; ilc++) {

			if(olc+ilc==row-1) {
				printf("# ");
			}
			else if(olc+ilc >= row  - 1 ){
				printf("* ");
			}
			else
				printf("  ");
		}
		printf("\n");
	}

}
