/*
 * Program 1: Write a Program to that prints series of Prime number ranging
between 1 to 100.
Output: 1 2 3 5 . . .
*
*/

#include <stdio.h>

void main() {

	int count;

	//for loop to traverse upto 1 to 100
	for(int lc=1; lc<=100 ; lc++ ) {

		//assign counter to 1 
		count = 1;
		
		//for loop to check the prime or not
		for(int div =1; div<=lc/2; div++) {
			if(lc%div == 0 ) 
				count ++;
		}
		if(count == 2) 
		       printf("%d ", lc);
	}
	printf("\n");


}
