/*Program 1: Write a Program to takes a number from user and prints those
digits who are prime in nature.
Input: 16532
Output: The Prime Digits are 1 5 3 2
*/

#include <stdio.h>

//check prime or not
int isPrime(int num) {
	int flag = 1;

	for(int i=2; i<=num-1; i++) {
		if ( num%i == 0 )
			flag =0;
	}
	return flag;

}	


void main() {
	
	int num, rem;
	printf("Enter num: ");
	scanf("%d", &num);
	//seprate each digit
	printf("The prime digits are: ");
	while(num) {
		rem = num%10;
		//chech it is prime or not		
		if(isPrime(rem)) {
			printf("%d ", rem);
		}
		num /=10;
	}
	printf("\n");
}
