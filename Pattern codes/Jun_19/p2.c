#include<stdio.h>

void main(){
		int num;
		
		printf("Enter number: ");
		scanf("%d",&num);
		
		int num2;
		printf("Reversed number is: ");

		while(num > 0){
			num2 =num%10;
			num=num/10;
			printf("%d",num2);
		}
		printf("\n\n");
}
		
