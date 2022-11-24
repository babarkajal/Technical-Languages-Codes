/*Program 4: Write a Program to Print following Pattern.
100
16
81 64
49 36 25
9 4 1
*/


#include <stdio.h>


void main() {
	int row; 
	int num=0;
	do {
		printf("Enter rows: ");
		scanf("%d",&row);
		if(row < 0)
			printf("Enter the non-negative value\n");
	}while(row < 0);

	//calculate addition of all num upto row
	for(int lc =1; lc<=row; lc++ ) {
		num +=lc;
	}

	for(int olc=0; olc<row; olc++) {
		

		for(int ilc=0; ilc<row; ilc++) {

			if(olc+ilc >= row-1) {
				printf("%d  ",num*num);
				num--;
			}
			else
				printf("   ");

		}
		printf("\n");
	}

}
