/*Program 2: Write a Program to Convert entered Decimal Number to
Hexadecimal Number
Input: Decimal Number: 43
Output: Hexadecimal Number: 2B
*/

#include <stdio.h>

void main() {
	int decimal ;
	printf("ENter num: ");
	scanf("%d",&decimal);

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
	printf("\n");

}
