#include<stdio.h>

void main(){
		int num;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addSquare=0; //counting number of digits
		int square;
		div=num;
		
		while(div > 0){
			mod=div % 10;//gives the last digit
			square=mod * mod;
			addSquare = addSquare + square;
			div =div/10;
		}
		printf("Addition of sqaures of each digits in  %d : %d.\n\n",num,addSquare);
		
		
}
	 		
	  
