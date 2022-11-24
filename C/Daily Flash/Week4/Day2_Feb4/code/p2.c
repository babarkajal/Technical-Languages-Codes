/*
 * Program 2: Write a Program to Convert entered Binary Number to Decimal
Number
Input: Binary Number: 1011
Output: Decimal Number: 11
*
*/

#include <stdio.h>

int power(int base , int exp) {
	int pow = 1;
	for(int lc=1; lc<=exp; lc++) 
		pow = pow*base;
	return pow;
}

void main() {
	int binaryNo, decimal = 0, mod;
	printf("Enter binary number: ");
	scanf("%d", &binaryNo);
	int var=0;

	while(binaryNo != 0) {
		mod = binaryNo % 10;

		//multiply by power of 2 
		decimal += mod * power(2,var);
		binaryNo /=10;
		var++;
	
	}
	printf("Decimal number: %d\n",decimal);

}
