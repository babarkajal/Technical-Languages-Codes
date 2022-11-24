/*
 * Program 3: Write a Program to that skips the occurrence of perfect numbers
using continue statement. Print this sequence up to 100.
Output: 1 2 3 4 5 7 8 9. . . ..
*/

#include <stdio.h>

void main() {
	
	int sumOfDiv = 0, num,div;
	for(num=1; num<=100; num++) {
		sumOfDiv = 0;
		for(div=1; div<=num/2; div++) {
			if(num%div == 0)
				sumOfDiv +=div;
		}
		if(num == sumOfDiv) 
			continue;
		printf("%d  ", num);

	}
	printf("\n");

}
