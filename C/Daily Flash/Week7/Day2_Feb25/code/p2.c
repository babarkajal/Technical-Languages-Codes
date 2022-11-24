/*Program 2: Write a Program that calculates Square Root of a number ranging
in 200 to 600
*/

#include <stdio.h>

int sqrtNo(int num) {
	
	for (int i=1; i<=num; i++) {
		if(num / i == i && num % i == 0)  {
			return i;
		}
	}
	return 0;
}
 
void main() {

	for(int i=200; i<=600; i++) {	

		int squareRoot = sqrtNo(i);
		if(squareRoot) {
			printf("Square root of %d is %d\n", i,squareRoot);
		}
	}
}
