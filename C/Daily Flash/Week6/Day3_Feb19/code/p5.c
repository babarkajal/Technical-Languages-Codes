/*Program 5: Write a Program that takes a number as input from user and prints
Quotient of division of each digit from that number with the number itself.
Input: 124
Output:
The Quotients of Divisions are;
124/1 = 124
124/ 2 = 62
124/4 = 31
*/

#include <stdio.h>

int temp;
void quotient(int num) {
	
	if(num != 0) {
		printf("%d/%d = %d\n", temp ,num%10, temp/(num%10));
		void (*ptr)(int) = quotient;
		ptr(num/10);
	}
	else {
		return;
	}
}

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d", &num);

	//store original num;
	temp = num;

	void(*ptr)(int) = &quotient;
	(*ptr)(num);
	
}
