#include<stdio.h>

void main(){
		int num,reversedNumber=0;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div;//to store divison
		int mod;//to store reminder
		printf("even numbers from the %d\n",num);
		div=num;
		while(div!=0){
				mod= div %10;
				reversedNumber =reversedNumber*10 + mod;
				div=div/10;
		}
		div=reversedNumber;
		while(div!= 0){
			mod=div % 10;//gives the last degit
				if(mod%2 == 0){
					printf("%d ",mod);
				}
			div =div/10;
		}
		printf("\n");
		
}
	 		
	  
