#include<stdio.h>

void main(){
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
	 		
	  
