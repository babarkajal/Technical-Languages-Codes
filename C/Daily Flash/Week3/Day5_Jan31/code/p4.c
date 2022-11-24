/*
 * Program 4: Write a Program to Print following Pattern.
7
6 5 
5 4 3 
4 3 2 1
*
*/

#include <stdio.h>

void main() {
	int row;
	printf("Enter row: ");
	scanf("%d",&row);
	int var;

	if (row <= 0 ) 
	       printf("Invlaid rows!!!\n");
	else {
		for(int olc=1; olc <=row; olc++) {
			var = row*2-olc;
			for(int ilc=1; ilc<= olc; ilc++) {
				printf("%d ",var);
				var--;	
			}	
			printf("\n");
		}
	}	

}
