//Factorial 
#include<stdio.h>

void main(){
		
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	int fact=1;
	
	int lc=num;
	while(lc > 0){
		fact = fact*lc;
		lc--;
	}

	printf("Factorial of %d = %d\n\n",num,fact);
}



