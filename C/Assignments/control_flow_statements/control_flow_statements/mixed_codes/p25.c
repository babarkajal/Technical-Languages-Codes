#include<stdio.h>

void main(){
		int num;
		 printf("enter the number: ");
	       	scanf("%d",&num);
		int div;//to store divison
		int mod;//to store reminder
		int count=0; //counting number of digits
	
		div=num;
		
		while(div > 0){
			mod=div % 10;//gives the last degit
			count++;
			div =div/10;
		}
		printf("Number of digits in the number %d : %d.\n\n",num,count);
		
		
}
	 		
	  
