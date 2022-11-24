/*Program 1: Write a Program that prints the Series of palindrome ranging in 300
to 600
Output: 313, 323, 333, 343 . . .
*/

#include <stdio.h>


int isPalindrome(int num) {
	int rev =0;
	int original = num;
	for(; num != 0; rev = rev * 10 + (num%10), num = num/10 );
	//printf("%d ", rev);

	if(original ==  rev)
		return 1;
	else 
		return 0;

}

void main() {

	for(int i=300; i<=600; i++ ) {
		if(isPalindrome(i)) {
			printf("%d  ", i);
		}
	}
	printf("\n");

}
