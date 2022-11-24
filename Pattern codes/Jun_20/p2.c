//append the number

#include<stdio.h>
void main(){
	int num,mod,sum=0,reversedNo=0;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	//test case
	while(num < 0){
		printf("please enter positive number only\n");
		printf("Enter number: ");
		scanf("%d",&num);
	}
	while(num > 0){
		mod=num%10;
		num=num/10;
		reversedNo =reversedNo*10+mod;
	}
	printf("reversed Number is: %d\n",reversedNo);
}
	
