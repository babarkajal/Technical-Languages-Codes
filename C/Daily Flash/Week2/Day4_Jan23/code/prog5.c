/*Program 5: Write a C program to calculate the factorial of a given number.
Input: 5
Output:
The Factorial of 5 is: 120
*/
#include <stdio.h>

void main() {
	int num, fact= 1;
	printf("Enter num for factorial: ");
	scanf("%d",&num);

	for(int i=1; i<=num; i++)
		fact *=i;
	printf("Factorial of %d : %d\n",num,fact);

}
