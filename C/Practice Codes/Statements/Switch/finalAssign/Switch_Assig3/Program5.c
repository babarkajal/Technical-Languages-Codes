#include <stdio.h>

int main(){

	int a;

	switch(a = (sizeof(int) > -1)){

		case 1: 
			printf("True\n");
			break;
		case 0: 
			printf("False\n");
			break;
	}
	return 0;
}
	//In this the condition is false becaouse.
	/*Negative integer numbers are stored internally by taking its 2's compliment.
	For example -1 is represented as 
	1111111111111111111111111111111.

	How? 
	Ans.
 
	Step 1 :
	-1 in binary is (32 bit as 4 bytes it takes to store signed int) 

	00000000000000000000000000000001

	Leftmost bit is called Most significant bit (msb), rightmost bit is called Least significant bit (lsb).

	Step 2:
	Flip all the bits,
	11111111111111111111111111111110

	Step 3:
	Add 1, so result is

	11111111111111111111111111111111.
	This is how -1 is internally stored.

	Now in the question sizeof() is used which returns long unsigned (64 bit) value, while -1 is signed integer (32 bit) value. 
	So compiler converts signed integer to long unsigned.

	So 32 bits are added to -1 so both becomes equal ie. -1 becomes 
	0000000000000000000000000000000011111111111111111111111111111111.
 
	Which is far more greater than sizeof(int) which is 4.
*/
