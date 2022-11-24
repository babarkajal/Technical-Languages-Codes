/*
 * Program 1: Write a Program that prints the Series of palindrome bounding
between limits entered by user.
Input:
Lower Bound: 300
Upper Bound: 350
Output: 303, 313, 323, 333, 343
*
*/

#include <stdio.h>


int isPalindrome(int num) {
	int rev =0;
	int original = num;
	for(; num != 0; rev = rev * 10 + (num%10), num = num/10 );
	//printf("%d ", rev);

	if(original ==  rev)
		return 1;
	else
		return 0;

}

void main() {
	int lowerBound, upperBound;
	//accept lower and  upper Bound
	printf("Lower bound: ");
	scanf("%d", &lowerBound);
	
	do {
		printf("Upper bound: ");
		scanf("%d", &upperBound);

		if(lowerBound >= upperBound) 
			printf("Upper Bound should Be greather than the lower Bound\n");

	}while(lowerBound >= upperBound);

		
	for(int i= lowerBound; i<=upperBound; i++ ) {
		if(isPalindrome(i)) {
			printf("%d  ", i);
		}
	}

	printf("\n");

}
