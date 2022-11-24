
#include <stdio.h>

void main() {
	int num1,num2;
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	printf("Before swapping\n");
	printf("%d  %d\n",num1,num2);
	
	int temp= num1;
	num1 = num2;
	num2 = temp;

	printf("After swapping\n");
	printf("%d  %d\n",num1,num2);
}

