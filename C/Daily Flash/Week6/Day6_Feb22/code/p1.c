/*Program 1: Write a Program that checks whether an entered number is
Harshad Number or Not.
{Note: A number is termed as Harshad number if sum of all digits from that
number is Perfect Divisor of that number. E.g., 171, 1+7+1 = 9, and 9 is perfect
divisor of 171 so 171 is Harshad number.}
Input: 9
Output: 9 is harshad number.
*/



#include <stdio.h>


void main() {
	int num;
	printf("Enter num to check  whether it is harshad num or not: ");
	scanf("%d",&num);

	int sum = 0;
	int temp = num, rem;
	while(temp) {
		rem = temp%10;
		sum+=rem;
		temp /=10;
	}
	
	//if the num is divisible by the sum of its digits then it is a harshad num
	if(num%sum ==0)
		printf("%d is harshad num.\n ", num);
	else
		printf("%d is not harshad num.\n ",num);

}	
