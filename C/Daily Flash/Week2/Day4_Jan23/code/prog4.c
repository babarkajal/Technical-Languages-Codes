/*Program 4: Write a Program to Print following Pattern
*
* * 
* * *
* * * * 

*/



#include <stdio.h>

void main () {
	int row;
	printf("Enter row: ");
	scanf("%d",&row);

	for(int olc = 0; olc<row; olc++) {

		for(int ilc = 0; ilc<=olc; ilc++) {
			printf(" * ");
		}
		printf("\n");

	}
}
