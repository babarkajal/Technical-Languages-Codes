/*
 * Program 5: Write a Program that calculates the Greatest Common Divisor of
two entered numbers.
Input: 25 15
Output: The GCD of 25 & 15 is 5.
*
*/

#include <stdio.h>


void main() {
	int num1, num2;
	printf("Enter two nos: ");
	scanf("%d%d", &num1,&num2);
	int GCD;
	int min= num1 < num2 ? num1 : num2;
	for(int i=1; i<=min; i++) {
		if(num1%i==0 && num2%i==0) 
			GCD = i;
	}

	printf("The GCD of %d and %d is %d\n",num1, num2, GCD);
	

}
