#include <stdio.h>

void main() {
	int row;
	printf("Enter row num: ");
	scanf("%d",&row);
	int var = 65;
	for(int i=0; i<row; i++){
		
		for(int j=0; j<=i; j++) { 
			if(i%2!=0)
				printf("%c ",var);
			else
					printf("%c ",var+32);
		}
			printf("\n");
	}


}
