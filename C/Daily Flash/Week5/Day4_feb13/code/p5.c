/*
 * Program 5: Write a Program that takes a number as input from user and prints
the counts the occurrence of Odd Digits & Even Digits from it
Input: 123458
Output:
The number 123458 Contains 3 Odd Digits & 3 Even Digits.
*
*/

#include <stdio.h>

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);

	int rem;
	//store the original num in another var
	int originalNo = num,countOdd=0,countEven=0;

	while(num!=0) {
		rem = num%10;
		//check digit is odd or even
		if(rem%2 ==0)
			countEven++;
		else
			countOdd++;
		num /=10;
	}

	printf("The number %d has %d odd digits and %d even digits\n",originalNo,countOdd,countEven);

}
