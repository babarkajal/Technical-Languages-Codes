/*
 * Program 1: Write a Program to check whether the entered number is Strong
Number or Not.
{Note: A number can be termed as strong number; if the sum of factorials of
each digit from that number is equal to that number, itself. e.g. 145 is a Strong
Number since 1 + 24 + 120 = 145.}
Input: 145
Output: 145 is a Strong Number
*
*/

#include <stdio.h>


//function to calculate factorial 
int factorial(int num) {
	int fact =1;
	while(num>=1) {
		fact = fact*num;
		num--;
	}
	return fact;
}

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	int sumOfFact = 0,rem;
	int temp = num;
	
	while(temp != 0) {
		rem = temp % 10;
		//calculate factorial and add it to the sum
		sumOfFact += factorial(rem);
		temp /= 10;		
	}

	if(sumOfFact == num) 
		printf("%d is a strong num\n", num);
	else
		printf("%d is not  a strong num\n", num);

}
