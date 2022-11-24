/*
 * Program 2: Write a Program that accepts Two integers from user and prints the
series of factorial of all numbers between those two inputs.
Input: 1 to 5
Output:
Factorial of 1 = 1
.
.
Factorial of 5 = 120
*/

#include <stdio.h>

void main() {
	int num1,num2, fact,var;
	printf("Enter num1: ");
	scanf("%d", &num1); 

	printf("Enter num2: ");
	scanf("%d", &num2);

	while(num1 > num2) {
		printf("Enter num2 again (> num1): ");
		scanf("%d", &num2); 
	}

	printf("Factorial of numbers from %d to %d\n", num1,num2);
	
	for(int i=num1; i<=num2; i++) {
		fact = 1;
		var = i;
		while(var) {
			fact *= var;
			var--;
		}
		printf("Factorial of %d : %d\n",i , fact);
	}

	
}
