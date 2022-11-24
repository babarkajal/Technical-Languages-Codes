

#include <stdio.h>


void main() {
	int row, j , k;
	printf("Enter row: ");
	scanf("%d",&row);
	char ch1 = 'A'+ row, ch2 = 97;
	for (int outer = 0; outer < row; outer++) {
		for(j=0 ; j < outer; j++ ) 
			printf("  ");
		for (k =j; k < row; k++) {
		        if( k %2 == 0) 	
				printf("%c ",ch1--);
			else
				printf("%c ",ch2++);
		}
		printf("\n");
	}

}
