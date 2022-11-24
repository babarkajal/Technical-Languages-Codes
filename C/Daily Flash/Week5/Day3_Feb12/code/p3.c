/*Program 3: Write a Program to that accepts an integer value from user and
prints all odd numbers from that number to one using while loop.
Input: 65
Output: 65 63 61 59 57 53 51. ....1
*/
#include <stdio.h>

void main() {
	int num;
	printf("Enter num: ");
	scanf("%d", &num);
	while(num--) {
		if(num%2 != 0)
		       printf("%d  ", num);
		else
			continue;
	}
	printf("\n");	

}
