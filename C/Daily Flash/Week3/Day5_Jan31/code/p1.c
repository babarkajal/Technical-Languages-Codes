/*Program 1: Write a Program to that prints the series which increases with the
number entered by user.
Input: 15
Output: 1 16 31 46 . . ..
*/

#include <stdio.h>

void main() {
	int increment;
	printf("Enter increment : ");
	scanf("%d", &increment);

	//limit for the loop is upto 100
	int i=1;
	for(int lc=1; lc<=100 ;lc++)  {
		printf("%d  ", i);
		i += increment;
	}
	printf("\n");
}
