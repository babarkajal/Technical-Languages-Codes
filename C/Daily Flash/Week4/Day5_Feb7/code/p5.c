

#include <stdio.h>

void main() {
		int row;
		do {
			printf("Enter rows: ");
			scanf("%d", &row);
			if(row < 0)
				printf("Enter non-negative num\n");
		}while(row < 0);

		
		for (int olc=0; olc<row; olc++){
			for(int ilc=0; ilc<row; ilc++ ){
				if(olc == ilc) 
					printf("= ");
				else
					printf("%d ",ilc+1);
			}
			printf("\n");
		}		
}
