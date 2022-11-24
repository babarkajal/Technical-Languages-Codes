//Addition of all numbers

#include<stdio.h>
void main(){
	int num,mod,sum=0;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	while(num < 0){
		printf("please enter positive number only\n");
		printf("Enter number: ");
		scanf("%d",&num);
	}
	while(num > 0){
		mod=num%10;
		num=num/10;
		sum +=mod;
	}
	printf("Sum of all digits: %d\n",sum);
}
	
