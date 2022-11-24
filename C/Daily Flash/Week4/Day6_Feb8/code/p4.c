#include <stdio.h>

void main() {
	
		int row;
		do {
			printf("Enter rows: ");
			scanf("%d", &row);
			if(row < 0)
				printf("Enter non-negative num\n");
		}while(row < 0);
		
		for(int olc=0; olc<row; olc++) {
			for(int ilc=0; ilC<row; ilc++) {
				if(olc+ilc == row-1) 
					printf("= ");
				else if(olc+ilc ) 
					printf("%d ")
			}
		}

}
