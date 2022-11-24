/*
 * Program 5 : Write a Program to print following Pattern.
Output :
0
0 0
0 0 0 
0 0 0 0
*
*/

#include <stdio.h>


void main() {
	int i,row;
	printf("Enter row: ");
	scanf("%d",&row);

	for(int i=0; i<row; i++) {
		for(int j=0; j <=i; j++) 
			printf(" 0 ");
		printf("\n");
	}	


}

