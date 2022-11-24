/*
 * Program 5: Write a Program that takes a number as input from user and prints
the counts the occurrence of odd digits from it
Input: 123458
Output: The number 123458 has 3 Odd digits.
*/

#include <stdio.h>

void main() {
	int num;
	printf("ENter num: ");
	scanf("%d",&num);

	int rem;
	//store the original num in another var
	int originalNo = num,countOdd=0;
	while(num!=0) {
		rem = num%10;
		//check digit is odd or not
		if(rem%2!=0)
			countOdd++;
		num /=10;
	}

	printf("The number %d has %d odd digits\n",originalNo,countOdd);

}
