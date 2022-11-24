#include<stdio.h>

void main(){
		int num;
		
		printf("Enter number: ");
		scanf("%d",&num);
		
		int num2;
		printf("Last digit of number is: ");

		while(num != 0){
			num2 =num%10;
			printf("%d",num2);
			num=0;
		}
		printf("\n\n");
}
		
