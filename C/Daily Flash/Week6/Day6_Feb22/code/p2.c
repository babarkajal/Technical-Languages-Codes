/*
 * Program 2: Write a Program that accepts a number from user and asks for user
choice from (Binary, Octal, and Hexadecimal) and prints respective values of
each digit from that number.
{Note: User Choice, 1 for Binary, 2 for Hexadecimal, and 3 for Octal)
Input:
Enter Number: 123
Enter Choice: 1
Output:
Binary of 1: 1
Binary of 2: 10
Binary of 3: 11
*/

#include <stdio.h>

//decimal to Binary  
void decToBin (int decimal) {
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
}// end of fun


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
	printf("\n");

}//end of fun

//decimal to octal conversion
void decToOctal(int decimal) {
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
}//end of fun

//main starts here
void main() {
	int decimal;
	printf("Enter decimal num: ");
	scanf("%d", &decimal);
	int choice;//for choice
	char continueLoop; //for loop control

	//function ptr
	void(*ptr)(int) =NULL;
	do {
		printf("1.Binary\n2.Octal\n3.Hexadeciaml\nEnter your choice: ");
		scanf("%d",&choice);
		printf("\n");
		switch(choice) {
			case 1: 
				ptr = decToBin;
				ptr(decimal);
				break;
			case 2:
				ptr = decToOctal;
				ptr(decimal);
				break;
			case 3:
				ptr = decToHex;
				ptr(decimal);
				break;
		}//end of switch

		printf("\nDo you want to continue(y/n): ");
		//take extra \n
		scanf("\n");
		scanf("%c", &continueLoop);
	}while(continueLoop== 'y' || continueLoop == 'Y');
	
}
