/*
 * Program 5: Write a Program that accepts an integer from user and prints all of
its perfect divisors.
Input: 24
Output: Perfect Divisors of 24 are: 2 3 4 6 8 12
*/

#include<stdio.h>
void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	printf("Perfect Divisors of %d are: ", num);
	for(int i=2; i<= num/2; i++) {
		
		if(num%i == 0)
			printf("%d  ", i);
	}
	printf("\n");

}
