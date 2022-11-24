/*
Program 3: Write a Program to that skips the occurrence of numbers that are
divisible by 2 using continue statement. Print this sequence up to 100.
Output: 1 3 5 7 9 11 13
*/


#include <stdio.h>


void main() {
	
	printf("Output after skipping the numbers which are divisible by 2 upto 100:\n");
	//to skip number that are divisible by 2
	for (int lc=1; lc<=100 ;lc++) {

		//if found then continue the next iteration
		if(lc %2 == 0)
			continue;
		else
			printf("%d ", lc);

	}
	printf("\n");


}
