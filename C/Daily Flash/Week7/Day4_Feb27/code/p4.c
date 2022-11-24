/*
A B D G
G H J
J K
K
*/


#include <stdio.h>
void main() {
	int row;
	printf("Enter rows: ");
	scanf("%d", &row);

	int num=65;	//extra var to print chr
	for (int outer = 0; outer < row; outer++) {
		for(int inner = 0; inner < row-outer; inner++) {
				num += inner;	//inc num by inner 
				printf("%c ",(char)num);
		}

		//sub 1 from char to get next specified char
		//num -= outer;
		printf("\n");
	}
}
