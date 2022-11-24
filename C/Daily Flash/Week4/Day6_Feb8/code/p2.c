/*Program 2: Write a Program to Convert entered Decimal Number to Octal
Number
Input: Decimal Number: 15
Output: Octal Number: 17
*/

#include <stdio.h>

void main() {
	int decimal ;
	printf("Enter num: ");
	scanf("%d",&decimal);

	int rem,octal[20], len=0;
	
	if(decimal < 8) {
		printf("Octal = %d\n",decimal);
	}
	else {
		//continues till the elements become 0
		while(decimal != 0) {
			//find the rem
			rem = decimal%8;
			octal[len++] = rem;
			//divide the number by 8
			decimal /= 8;
		}

		//print array in reverse
		printf("Octal = ");
		for(int lc=len-1; lc >=0; lc--) {
				printf("%d",octal[lc]);
		}
		printf("\n");
	}

}
