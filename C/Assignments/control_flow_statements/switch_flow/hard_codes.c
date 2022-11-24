#include<stdio.h>

void p26(){
		printf("To perform addition of sqaures of each digit of given number.\n");
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


void p27(){
		printf("To perform addition of factorial of each digit of given number.\n");
		int num;
		printf("enter the number: ");
		scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addFact=0; 
		int fact;
		
		div=num;//initlization
		
		while(div > 0){
			mod=div % 10;//gives the last digit
				
	//calculating fact of each digit
			fact=1;
			for(int i=1; i<=mod ; i++){
					fact=fact*i;
			}
			addFact += fact; 

			div =div/10;
		}
		printf("Addition of factorials of each digits in %d : %d\n\n",num,addFact);
		
		
}

void p28(){
                printf("To print pallindrome number.\n");
		int div,num,reversedNumber;
		int mod;
		printf("Enter the number(above 100): ");
		scanf("%d",&num);
		for(int i=101;i<=num;i++){
			reversedNumber=0;
			div=i;
			while(div!=0){
				mod= div %10;
				reversedNumber = reversedNumber*10 + mod;
				div=div/10;
		      	}
			if(i==reversedNumber){
				
				printf("%d\n",reversedNumber);
		        }
		}
}

void p29(){
	        printf("To check the given number is armstrong number or not.\n");
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


void p30(){
		printf("To check the given number is strong number or not.\n");
		int num;
		printf("enter the number: ");
		scanf("%d",&num);
		int div; //to store divison
		int mod; //to store reminder
		int addFact=0; 
		int fact;
		
		div=num;//initlization
		
		while(div > 0){
			mod=div % 10;//gives the last digit
				
	//calculating fact of each digit
			fact=1;
			for(int i=1; i<=mod ; i++){
					fact=fact*i;
			}

			addFact += fact; //additon of fact

			div =div/10;
		}

		printf("Addition of factorials of each digits in %d : %d\n",num,addFact);
		
		if( num ==addFact)	
			printf("%d is a strong number.\n\n",num);
		else
			printf("%d is not a strong number.\n\n",num);
}


