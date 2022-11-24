/*Program 2: Write a Program to Convert entered Octal Number to Decimal
Number
Input: Decimal Number: 17
Output: Decimal Number: 15
*/
/*----------------------------------------------------------------------------
 * 1.take number from user
 * 2.convert it into the decimal number by multipling the  each digit by power of 8
 */


#include <stdio.h>

//calculate power
int power(int base, int exp) {
	int power=1;

	while(exp--) 
		power *=base;
	//	printf("%d",power);

	return power;
}

//convert octal to the decimal
int octToDec(int octal) {

	int exp=0,mod,decimal = 0; 
	
	while(octal!=0) {
		mod = octal%10;
		decimal = decimal + mod*power(8,exp);
		octal /=10;
		exp++;
	}
	return decimal;
}


void main() {
	//step1
	int octal;

	printf("Enter octal number: ");
	scanf("%d",&octal);

	//convert it into decimal
	int(*funPtr)(int) = octToDec;
	int decimal = (*funPtr)(octal);

	printf("Decimal number: %d\n",decimal);
}
