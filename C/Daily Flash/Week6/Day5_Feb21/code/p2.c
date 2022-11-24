/*Program 2: Write a Program that prints octal value of Each Digit from entered
Number.
Input: 82
Output:
Binary of 8: 10
Binary of 2: 2
*/

#include<stdio.h>

void decToOctal(int decimal) {
	int rem,octal[20], len=0;

	//store the original num
	int temp = decimal;

	if(decimal < 8) {
		printf("Octal conversion of %d = %d\n",decimal,decimal);
	
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
		printf("Octal conversion of %d = ", temp);
		for(int lc=len-1; lc >=0; lc--) {
				printf("%d",octal[lc]);
		}
		printf("\n");
	}
}//end of fun

void main() {
	int decimal,rem;
	printf("Enter deciaml: ");
	scanf("%d", &decimal);

	while(decimal) {
		rem = decimal %10;
		decToOctal(rem);
		decimal /=10;
	}
}
