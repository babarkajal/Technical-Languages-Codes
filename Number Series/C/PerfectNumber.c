/*
 * Program 1: Write a Program which detects whether the entered number is
perfect or not .
{Note: If sum of perfect divisors of number is equal to the entered number
than it is considered as perfect one.}
Input : 6
Output : 6 is a Perfect number.
*/

#include <stdio.h>

void main() {

	int num, sumOfDivisor = 0;
	printf("Enter num: ");
	scanf("%d",&num);

	for(int i=1; i <= num/2 ;i++) {
		if( num%i == 0) {
			//printf("****\n");	
				sumOfDivisor+=i;
		}
	}
	if(num == sumOfDivisor ) 
			printf("%d is a perfect number\n", num);
	else
			printf("%d is not a perfect number\n", num);


}
