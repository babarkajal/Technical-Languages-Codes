#include<stdio.h>

void main(){
		int num;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addCube=0; //counting number of digits
		int cube;
		div=num;
		
		while(div > 0){
			mod=div % 10;//gives the last digit
			cube=mod * mod * mod;
			addCube = addCube + cube;
			div =div/10;
		}
	
		printf("Addition of cubes of each digits in  %d : %d.\n\n",num,addCube);
		
		if( num==addCube )
			printf("%d is an Armstrong number.\n\n",num);
		else
			printf("%d is not an Armstrong number.\n\n",num);
		
		
}
	 		
	  
