/*
 * Program 3: Write a Program to that accepts two integers from user and
calculates the Quotient & Reminder from their division
Input: 10 5
Output:
Quotient: 2
Reminder: 0
*/

#include <stdio.h>

void main() {
	int num1,num2;
	printf("Enter two num: ");
	scanf("%d%d",&num1,&num2);

	num2 == 0 ? printf("Cannot divide by zero!!!\n") : printf("Quotient: %d\nReminder: %d\n",num1/num2, num1%num2); 
}
