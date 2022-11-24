/*
 * Program 2: Write a Program to calculate Simple Interest. Taking all essential
terms to compute as input.
*
*/

#include <stdio.h>
void main() {
	int priAmt,year;
	float rate;

	printf("Enter the primary ammount: ");
	scanf("%d", &priAmt);	
	
	printf("Enter the interest rate(peercentage): ");
	scanf("%f", &rate);	
	
	printf("Enter the year: ");
	scanf("%d", &year);

	float simpleInterest = priAmt*year* (rate / 100);
	printf("Simple interest = %f\n\n", simpleInterest);
}
