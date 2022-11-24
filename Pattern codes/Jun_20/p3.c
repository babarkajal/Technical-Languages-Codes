//append the number and again split it

#include<stdio.h>
void main(){
	int num,mod1,sum=0,reversedNo=0,mod2;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	//test case
	while(num < 0){
		printf("please enter positive number only\n");
		printf("Enter number: ");
		scanf("%d",&num);
	}
	while(num > 0){
		mod1=num%10;
		num=num/10;
		reversedNo =reversedNo*10+mod1;
	}
	printf("reversed Number is: %d\n",reversedNo);
	printf("Split the number:\n");
	
	while(reversedNo > 0){
		mod1=reversedNo%10;
		reversedNo /=10;
		printf("%d\n",mod1);
	}
	
			
}
	
