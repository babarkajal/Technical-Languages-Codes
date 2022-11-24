/*Program 1: Write a Program to print Series of Strong Numbers up to Nth
Elements. Where n is the number entered by User.
*/

#include <stdio.h>


//function to calculate factorial
int factorial(int num) {
	int fact =1;
	while(num>=1) {
		fact = fact*num;
		num--;
	}
	//printf("%d\n", fact);
	return fact;
}

void main() {
	int num,temp;
	printf("Enter range for the series: ");
	scanf("%d",&num);

	int sumOfFact = 0,rem;
	printf("Factorial series upto %d\n",num);
	
	for (int i=1; i<=num; i++) {
		
		temp = i;
		sumOfFact = 0;
		while(temp != 0) {
			rem = temp % 10;
			//calculate factorial and add it to the sum
			sumOfFact += factorial(rem);
			temp /= 10;
		}

		if(sumOfFact == i)
			printf("%d  ",i);
	}
	printf("\n");
}
