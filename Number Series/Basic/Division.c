#include<stdio.h>

void main() {

	int num1,num2;
	printf("Enter number 1: ");
	scanf("%d",&num1);

	printf("Enter number 2: ");
	scanf("%d",&num2);
	
	//multiplication
	print("Multiplication = %d\n",num1*num2);

	//division
	if(num1 > num2)
		print("Division = %d\n",num1/ num2);
	else
		print("Division = %d\n",num2/num1);
}


