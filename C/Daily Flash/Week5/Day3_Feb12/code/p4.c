/*Program 4: Write a Program to Print following Pattern.
9
9
9 16
9 16 25
16 25 36
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
	int num;
	for(int olc=0; olc<row; olc++) {
		num = row-1;
		for(int ilc=0; ilc<row; ilc++) {
			if(olc+ilc >= row  - 1 ){

				//print square
				printf(" %d ",num*num);
				num++; //increment num
			}else {
				printf("   ");
			}
		}
		printf("\n");
	}

}
