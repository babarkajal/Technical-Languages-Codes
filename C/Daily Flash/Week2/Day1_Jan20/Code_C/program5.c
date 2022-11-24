/*
 * Program 5: Write a Program to print following Pattern.
Output:
0 0 0 0
1 1 1 1
0 0 0 0
1 1 1 1
*/

#include <stdio.h>

void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d",&row);

	for(int i = 0 ; i< row; i++) {
		for(int j = 0 ; j < row; j++) {
			if(i%2==0)
				printf(" 0 ");
			else
				printf(" 1 ");
			
		}
		printf("\n");
	}

}
