/*
 * Program 3: Write a Program to Print following Pattern.
A A A A A
B B B B
C C C
D D
E
*/

#include<stdio.h>

void main() {
	int row, var ;
	char ch = 'A';
	printf("Enter row: ");
	scanf("%d",&row);

	if (row <= 0 ) 
	       printf("Invlaid rows!!!\n");
	else {
		var = row;
		for(int olc=0; olc<row; olc++) {
			
			for(int ilc=0; ilc < var ;ilc++) {
					printf("%c ", ch);


			}
			ch +=1;
			var--;
			printf("\n");

		}
		
	}	

}
