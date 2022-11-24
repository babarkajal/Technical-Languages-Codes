/*Program 5: Write a Program to check whether a number can be express as sum
of two prime numbers.
Input: 20
Output: 20 = 7 + 13
*/


#include <stdio.h>

int isPrime(int num) {
	int flag = 0;
	for(int i=2; i<=num/2; i++) {
		if(num%i==0)
			flag = 1;
	}
	if(!flag)
		return 1;
	else
		return 0;
}//end of prime

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	
	//array for prime num
	int prime[num], len =0;

	for(int lc = 1; lc<=num ; lc++) {
		if(isPrime(lc))
			prime[len++] = lc;
	}

	printf("Prime num\n");
	for(int lc = 0; lc< len ; lc++) {
		printf("%d\t",prime[lc]);

	}
	printf("\n");

	int flag=0;
	for(int num1 = 0; num1< len; num1++) {
		for(int num2=0; num2<len; num2++) {

			//if addition of two prime is equal to the original num
			if(prime[num1]+prime[num2] == num) {
				printf("%d + %d = %d\n", prime[num1], prime[num2], num);
				flag = 1;
			}
		}
	}
	if(!flag) 
		printf("The entered num is not sum of any two prime num: \n");

}
