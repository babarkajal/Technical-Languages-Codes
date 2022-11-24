#include<stdio.h>

void main(){
		int num1,num2;
		printf("Enter the two intergers: ");
		scanf("%d %d",&num1,&num2);
		int *iptr1,*iptr2;

		//Referencing
		iptr1=&num1;
		iptr2=&num2;
		int result;
		
		printf("\nmathematical operations on varibles by dereferncing pointers: \n");
		printf("Addition: %d\n", *iptr1 + *iptr2);

		
		printf("Substraction: %d\n", *iptr1 - *iptr2);

		printf("Multiplication: %d\n", *iptr1 * *iptr2);

		
		printf("Division: %d\n", *iptr1 / *iptr2);

}
