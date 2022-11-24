/*
 * Program 2: Write a Program to Convert entered Octal Number to Binary
Number
Input: Decimal Number: 17
Output: Octal Number: 1111
*/
/*---------------------------------------------------------------------------------------------------------------------------------------------------
 * Step 1: first accpet octal num
 * step 2:  convert it into decimal
 * step 3: convert the decimal to the binary
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

//global variable
int len=0;

//function to convert decimal to binary
int* decToBin(int decimal) {
	int rem;
	
	int *binary = (int*)malloc(sizeof(int)*20);
	while(decimal != 1) {
		rem = decimal %2;
		binary[len++] = rem;
		decimal /= 2;
	}	
	
	binary[len] = decimal;
	return binary;
	
}


void main() {
	int octal ;
	printf("Enter octal num: ");
	scanf("%d",&octal);
	
	int decimal = octToDec(octal);
	//printf("decimal = %d\n",decimal);
	
	int* binary = decToBin(decimal);
	printf("Binary conversion: ");
	
	for(int i=len; i>=0; i--) {
		printf("%d", *(binary+i));
	}
	printf("\n");
}
