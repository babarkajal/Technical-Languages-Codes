/*
Program 2: Write a Program to calculate Simple Interest. Taking all essential
terms to compute as input.
*/

#include<stdio.h>

void main(){
	
	long principal_amount;
	int  rate;
       	int  timeperiod;

	printf("Enter the principal amount : ");
	scanf("%ld",&principal_amount);
	printf("Enter the rate  : ");
	scanf("%d",&rate);
	printf("Enter the timeperiod (Years): ");
	scanf("%d",&timeperiod);

	printf("Simple Interest = %ld",(principal_amount*rate*timeperiod)/100);
		
}	
