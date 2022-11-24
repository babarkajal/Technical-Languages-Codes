/*Program 1: Write a Program to whether a number entered by user is Prime
Number or Not.
{Note: Prime Number is such a number, which is only divisible by 1 & that
number itself}
Input: 5
Output: 5 is a Prime Number.
*/
#include <stdio.h>


void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	int flag = 0;
	for(int i=2; i<=num/2; i++) {
		if(num%i==0)
			flag = 1;
	}
	if(!flag)
		printf("%d is a prime number\n",num);
	else
		printf("%d is not a prime number\n",num);



}
