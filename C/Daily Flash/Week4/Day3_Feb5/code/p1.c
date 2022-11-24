/*
 *Program 1: Write a Program to print Fibonacci Series of 5 Elements.
{Note: In Fibonacci series next element is sum of previous two elements}
Output: 0 1 1 2 3.
*/

#include<stdio.h>

void main() {
	int num1, num2, range, sum;
	/*user should  provide postivie value
	 */
	do {
		printf("Enter range: ");
		scanf("%d",&range);
		if(range < 0)
			printf("Enter non-negative value: \n");
	}while(range < 0);
	
	//first assign two num to 0 and 1
	num1 = 0;
	num2 = 1;

	printf("Fibonacci series: \n");
	
	//first print initial values
	printf("%d %d ", num1, num2);

	for (int lc=0; lc < range - 2; lc++) {
			
			sum = num1+num2;
			printf("%d ", sum);

			//then store value of num2 to num1 and sum to the num2;
			num1 = num2;
			num2 = sum;
	}
	printf("\n");
}
