//append the number and again split it

#include<stdio.h>
void main(){
	int num,mod1,sum=0,reversedNo=0,mod2,count=0;
	
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
		count++;
		reversedNo =reversedNo*10+mod1;
	}
	
	while(count > 0 && reversedNo > 0){
			mod1=reversedNo%10;
			reversedNo /=10;
			if(count%2==0)
				printf("%d\n",mod1*mod1*mod1);
			else
				printf("%d\n",mod1*mod1);
		count--;
	}
}
	
