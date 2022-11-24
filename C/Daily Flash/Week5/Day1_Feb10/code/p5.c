/*
 * Program 5: Write a Program that takes a number as input from user and prints
the digit count from that number.
Input: 123458
Output: The number 123458 has 6 digits.
*
*/

#include <stdio.h>

void main() {
	int num;
	printf("ENter num: ");
	scanf("%d",&num);

	int rem,rev=0;
	//store the original num in another var
	int originalNo = num,count=0;
	while(num!=0) {
		count++;
		num /=10;		
	}

	printf("The number %d has %d digits\n",originalNo,count);

}
