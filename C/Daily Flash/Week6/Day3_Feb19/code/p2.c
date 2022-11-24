/*Program 2: Write a Program that prints Binary of Each Digit from entered
Number.
Input: 12
Output:
Binary of 1: 0001
Binary of 2: 0010
*/


#include <stdio.h>


void convert(int decimal) {
	int temp = decimal;
	//divide the number by two  to get the binary
	int rem , binary[20]= {}, len =0;
	while(decimal != 1) {
		rem = decimal%2;
		binary[len++] = rem;
		decimal /=2;
	}
	binary[len] = decimal;
	
	printf("Binary conversion of %d: ", temp);
	for(int lc= len; lc >= 0 ; lc--)
		printf("%d", binary[lc]);

	printf("\n");
}

void main() {
	int num, rem;
	printf("Enter num: ");
	scanf("%d",&num);
	while(num != 0 ) {
		rem = num % 10 ;
		convert(rem);
		num /=10;
	}
	

}
