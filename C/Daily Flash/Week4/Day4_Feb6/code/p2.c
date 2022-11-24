/*
 * Program 2: Write a Program to Convert entered Decimal Number to Binary
Number
Input: deciaml Number: 35
Output: binarry Number: 100011
*/


#include <stdio.h>

void main() {
	//take decimal number from user
	int decimal;
	printf("Enter decimal number: ");
	scanf("%d",&decimal);
	

	//divide the number by two  to get the binary 
	int rem , binary[20], len =0;
	while(decimal != 1) {
		rem = decimal %2;
		binary[len++] = rem;
		decimal /=2;
	}	
	
	binary[len] = decimal;
	printf("Binary conversion: ");
	for(int lc= len; lc >= 0 ; lc--)
		printf("%d", binary[lc]);
	
	printf("\n");

}
