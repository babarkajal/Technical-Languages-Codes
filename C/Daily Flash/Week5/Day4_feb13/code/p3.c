/*Program 3: Write a Program to that accepts an integer value from user and
prints the sum of all digits from that number.
Input: 15895
Output: The sum digits from numbers 15895 is 28
*/

#include <stdio.h>

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	
	int sumOfDigits = 0, temp = num,rem;
	
	while(temp !=0) {
		rem = temp%10;
		sumOfDigits +=rem;
		temp /=10;
	}

	printf("The sum of digits from numbers %d is %d\n", num , sumOfDigits);
}
