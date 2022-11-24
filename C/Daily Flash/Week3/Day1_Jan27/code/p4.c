/*
 * Program 4: Write a Program to Print following Pattern.
1
4 9 
16 25 36
49 64 81 100
*/

#include <stdio.h>

void main() {
	int row;
	printf("Enter row num: ");
	scanf("%d",&row);
	int num=1;
	for(int i=0; i<row; i++){

		for(int j=0; j<=i; j++) {
			printf("%d  ",num*num);
			num++;
		}
			printf("\n");
	}


}
