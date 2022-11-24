/*Program 3: Write a Program that accepts a number from user and prints
minimum digit from that number.
Input: 12357798
Output: The Min Digit from number 12357798 is 1
*/
#include <stdio.h>
#include <malloc.h>

void main() {
	int *ptr = (int*)malloc(4);
	printf("Enter num: ");
	scanf("%d",ptr);

	int temp = *ptr, rem;	//store original num in temp var
	int min = temp%10;	//store the last digit as min

	while(temp) {
		rem = temp%10;
		//if min is greater than the another digit in the num then store it into min
		if(min > rem)
			min = rem;
		temp /=10;
	}
	printf("The minimum digit from num %d is %d\n", *ptr,min);
}
