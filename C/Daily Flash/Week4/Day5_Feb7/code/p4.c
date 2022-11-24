/*Program 4: Write a Program to Print following Pattern.
	D
      C D
    B C D
  A B C D
*/

#include <stdio.h>

void main() {
		int row;
		do {
			printf("Enter rows: ");
			scanf("%d", &row);
			if(row < 0)
				printf("Enter non-negative num\n");
		}while(row < 0);

		//external var to print char
		char ch = 'A';
		for (int olc=0; olc<row; olc++){
			for(int ilc=0; ilc<row; ilc++ ){
				if(olc+ilc >=row-1) 
					printf("%c ",ch+ilc);
				else
					printf("  ");
			}
			printf("\n");
		}		
}
