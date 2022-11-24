/*
 * Program 3: Write a Program that accepts a number from user and prints max
digit from that number.
Input: 12357798
Output: The Max Digit from number 12357798 is 9
*
*/

#include <stdio.h>
#include <malloc.h>

void main() {
	int *ptr = (int*)malloc(4);
	printf("Enter num: ");
	scanf("%d",ptr);
	
	int temp = *ptr, rem;	//store original num in temp var
	int max = temp%10;	//store the last digit as max

	while(temp) {
		rem = temp%10;
		//if max is less than the another digit in the num then store it into max
		if(max < rem) 
			max = rem;
		temp /=10;
	}
	printf("The maximum digit from num %d is %d\n", *ptr,max);
}
