/*
 * Program 5: Write a Program that computes sum of all possible divisors of an
entered number.
Input: 25
Output: The of all possible divisors of 24 is : 39
*
*/

#include <stdio.h>


void main() {
	int num, sum=0;
	printf("Enter num: ");
	scanf("%d",&num);

	for(int div=1; div<=num/2; div++) {
		if(num % div == 0) 
			sum +=div;
	}	
//	sum +=num;

	printf("The sum of all possible divisors of %d is: %d\n", num, sum);

}
