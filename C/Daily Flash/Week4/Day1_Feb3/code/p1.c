/*
 * Program 1: Write a Program that checks whether the entered number is a
Prime Number or not.
{Note: A Prime Number is that number which is only divisible by 1 & that
number only.}
Input: 5
Output: 5 is Prime Number.
*
*/
#include<stdio.h>


void main() {
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	int count=1;

	for(int i=1; i<=num/2; i++) {
		if(num%i == 0) 
			count ++;
	}

	if(count==2) 
		printf("%d is prime num\n", num);
	else
		printf("%d is not a prime num\n", num);

}
