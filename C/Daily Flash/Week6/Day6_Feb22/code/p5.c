/*Program 5: Write a Program that prints frequency of a digit from a number,
where user provides number & digit both.
Input:
Number: 1231234
Digit to check Frequency: 3
Output: The Frequency of 3 in number 1231234 is 2.
*/

#include <stdio.h>

void main() {
	int num, digit,countOfDigit=0,rem;
	printf("Enter num: ");
	scanf("%d",&num);
	printf("Enter digit to check frequency: ");
	scanf("%d",&digit);
	
	int temp = num;
	while(temp) {
		rem = temp%10;
		if(rem == digit)
			countOfDigit +=1;
		temp /=10;
	}

	printf("The frequency of %d in %d is %d\n", digit,num , countOfDigit);
	


}	
