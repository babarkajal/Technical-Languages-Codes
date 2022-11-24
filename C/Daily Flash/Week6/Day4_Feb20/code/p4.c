/*
 */

#include <stdio.h>

int power(int num,int exp) {
	int result=1;
	while(exp--) {
		result *=num;
	}
	return result;
}

void main() {
	int row; 
	printf("Enter row: ");
	scanf("%d",&row);
	int num1 = 0;
	int num2 = 1;
	int flag = 1, var1=1,var2=1;
	for(int outer =0 ; outer<row; outer++) {
		for(int inner = 0; inner < row; inner++) {
			if(inner >= outer) {
				
				if(flag){
					printf("%d ", num1);
					flag = 0;
					num1 = num1+power(10,var1);
					var1++;

				}
				else {
					printf("%d ", num2);
					flag = 1;
					num1 = num1 + power(10,var2);
					var2++;
				}
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}
