#include <stdio.h>
void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d", &row);
	
	int num=65;	//extra var to print chr
	
	for (int outer = 0; outer < row; outer++) {
		num = 65;
		for(int inner = 0; inner < row-outer; inner++) {
				printf("%d%c  ",inner+outer,(char)num);
		}

		printf("\n");
	}
}
