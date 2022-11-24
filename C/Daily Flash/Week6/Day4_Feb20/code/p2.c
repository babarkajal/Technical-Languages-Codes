/*
 * Program 2: Write a Program that prints Hexadecimal value of Each Digit from
entered Number.
Input: 12
Output:
Binary of 1: 1
Binary of 2: 2
*
*/

#include <stdio.h>



void decToHex(int decimal) {
	int rem,hex[20], len=0;
	int original = decimal;
	//continues till the elements become 0
	while(decimal != 0) {
		//find the rem
		rem = decimal%16;
		/*insert it into array
		 * 1.if greater than 10 then insert char
		 * 2.else insert as it is
		 */
		if(rem >= 10)
			hex[len++] =rem + 55 ;
		else
			hex[len++] = rem;
		//divide the number by 16
		decimal /=16;
	}

	//print array in reverse
	printf("Hexadecimal of %d = ", original);
	for(int lc=len-1; lc >=0; lc--) {
	       	if(hex[lc] >= 65 && hex[lc] <=90)
			printf("%c",hex[lc]);
		else
			printf("%d",hex[lc]);
	}
	printf("\n");
}

void main() {
	int num,rem;
	printf("Enter num: ");
	scanf("%d",&num);

	void(*funPtr)(int)=decToHex;
	printf("Hexdeccimal conversion of each digit: \n");
	while(num) {
		rem = num%10;
		funPtr(rem);
		num /=10;
	}
}
