/*
 * Program 4 : Write a Progr am to accept 10 integers from user and prin t s the
sum & average of entered numbers .
Input: 1 2 3 4 5 6 7 8 9 10
Output:
Sum of 10 entered Number is: 55
Average of 10 entered number is: 5.55
*
*/

#include <stdio.h>

void main() {
	int sum= 0, num;
	printf("Enter 10 numbers: \n");

	for(int i=1; i<=10; i++) {
		scanf("%d",&num);
		sum +=num;
	}
	float avg = sum/10;
	int fraction = sum%10;

	printf("Sum of 10 numbers : %d\n",sum);
	printf("Average of 10 numbers : %.0f.%d\n",avg,fraction);

}
