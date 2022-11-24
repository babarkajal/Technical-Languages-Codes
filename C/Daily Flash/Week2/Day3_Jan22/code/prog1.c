#include<stdio.h>

void main() {

	int num1,num2;
	printf("Enter number 1: ");
	scanf("%d",&num1);

	printf("Enter number 2: ");
	scanf("%d",&num2);
	
	//addtion
	printf("Addition = %d\n",num1+num2);

	//sub
	if(num1 > num2)
		printf("Substraction = %d\n",num1 - num2);
	else
		printf("Substraction = %d\n",num2 - num1);
}


