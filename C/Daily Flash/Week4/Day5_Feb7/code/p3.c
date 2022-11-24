/*
 * Program 3: Write a Program to that skips the occurrence of numbers that are
divisible by 7 using continue statement. Print this sequence up to 100.
Output: 1 2 3 4 5 6 8 9 10 11 12 13 15
*
*/

#include <stdio.h>

void main() {
	//trace upto the 100
	for(int lc=1; lc<=100; lc++) {
		if(lc%7 == 0)
			continue;
		else
			printf("%d  ", lc);
	}
	printf("\n");
}
