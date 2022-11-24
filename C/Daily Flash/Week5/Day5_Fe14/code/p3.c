/*Program 3: Write a Program to that accepts an integer value from user and
prints the Average of all the
Input: 1234
Output: The Average of digits from number 1234 is 5
*/
#include <stdio.h>

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	int sumOfDigits = 0, temp = num,rem,count=0;
	float avg;

	while(temp !=0) {
		rem = temp%10;
		sumOfDigits +=rem;
		temp /=10;
		count++;
	}

	avg = sumOfDigits / count;
	printf("The Average of digits from numbers %d is %.2f\n", num , avg);
}
