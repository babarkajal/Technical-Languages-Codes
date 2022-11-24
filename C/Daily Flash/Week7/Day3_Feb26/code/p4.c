/*
* * * * 
* * * 
* * 
* 

*/
#include <stdio.h>
void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d", &row);

	for (int outer = 0; outer < row; outer++) {
		for(int inner = 0; inner +outer < row; inner++) {
			if(inner+outer <= row -1) {
				printf("* ");
			}
		}
		printf("\n");
	}
}
