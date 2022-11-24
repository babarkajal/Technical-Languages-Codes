/*
 * Program 2: Write a Program that calculates Square Root of a number entered
by user.
{Note: Do not use library functions}
Input: 16
Output: Square Root of 16 is 4
*/

#include <stdio.h>

int sqrtNo(int num) {
	
	for (int i=1; i<=num; i++) {
		if(num / i == i && num % i == 0)  {
			return i;
		}
	}
	return 0;

}
 
void main() {

	//take a num from user
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	
	int squareRoot = sqrtNo(num);
	if(squareRoot) {
		printf("Square root of %d is %d\n", num,squareRoot);
	}
	else
		printf("ENTERED NUM IS NOT PERFECT SQUARE OF ANY NUM\n");
}
