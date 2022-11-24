/*
 * Program 1: Write a Program to print series of Even numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Even Numbers Ranging between 4 & 60 is:
4, 6, 8, . . ., 60
*/

#include <stdio.h>

void main() {
	int num1 ,num2;

	printf("Enter min: ");
	scanf("%d",&num1);

	printf("Enter max: ");
	scanf("%d",&num2);

	while(num1 > num2){
		printf("Again Enter num2(> num2): ");
		scanf("%d",&num2);
	}
	printf("Series of even num ranging between %d and %d is \n", num1, num2);
	for(int i = num1; i<= num2; i++)
		if(i%2==0)
			printf("%d  ", i);
	printf("\n");
}

