/*
 * Program 5: Write a Program that accepts 5 integer values from user and
compares two consecutive inputs and if the second of them is lesser that the
previous one then the code exits out of loop and prints the unexpected input.
{Note: Use Break Statement}
Input: 1 3 5 4
Output: Loop is exited with input 4.
*
*/

#include<stdio.h>


void main() {
	
	int val,prev, i = 1;

	printf("Enter 5 integers\n");

	//first take one input to store it in prev variable
	scanf("%d", &val);
	prev = val;
	
	for(i=2; i<=5; i++) {

		scanf("%d", &val);
		
		//when two input get from user compare it with prev one if is it less then break the loop
		if( prev > val) {
			printf("Inexpected input. Loop is exited with input %d\n",i);
			break;
		}
		
		//store prev value of val variable
		prev = val;
	}

}
