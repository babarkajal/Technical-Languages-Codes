#include<stdio.h>

void main() {

	int num1,num2;
	printf("Enter number 1: ");
	scanf("%d",&num1);

	printf("Enter number 2: ");
	scanf("%d",&num2);
	
	int cube1 = num1*num1*num1;
	int square1 = num1*num1;

	int cube2 = num2*num2*num2;
	int square2 = num2*num2;

	//addtion of their cube
	printf("Addition of %d & %d = %d\n",cube1 , cube2 ,cube1+cube2 );

	//substraction of their square
	printf("Substraction of %d & %d = %d\n",square1 , square2 ,square1 - square2 );
}


