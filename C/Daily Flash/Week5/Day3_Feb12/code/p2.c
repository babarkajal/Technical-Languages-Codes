/*Program 2: Write a Program to Convert entered Octal Number to Hexadecimal
Number
Input: Decimal Number: 77
Output: Decimal Number: 3F
*/
/*---------------------------------------------------------------------------------------------------------------------------------------------------
 * octal to hexadecimal converison
 * step 1: first convert octal to decimal
 * step 2: convert decimal to octal
 */

#include <stdio.h>

//calculate the power
int power(int base , int exp) {
	int result =1;
	while(exp--) 
		result *= base;

	return result;

}

//function to convert octal to decimal
int octToDec(int num) {
	int mod;
	int decimal = 0;
	int var = 0;
	while(num!=0) {
		mod = num%10;
		decimal = decimal + (mod * power(8,var));
		var ++;
		num /= 10;
	}
	return decimal;
}

void decToHex(int decimal) {
        int rem,hex[20], len=0;

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
	printf("Hexadecimal = ");
	for(int lc=len-1; lc >=0; lc--) {
	       	if(hex[lc] >= 65 && hex[lc] <=90) 	
			printf("%c",hex[lc]);
		else
			printf("%d",hex[lc]);
	}
	
}

void main() {
	int octal ;
	printf("Enter octal num: ");
	scanf("%d",&octal);

	//first convert octal to decimal
	int decimal = octToDec(octal);

	//convert decimal to hexdecimal
	void(*ptr)(int) = decToHex;
	(*ptr)(decimal);

	printf("\n");

}
