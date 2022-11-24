/*5. Write a c program to print all the ASCII values of numbers 1 to 128
     Op -> A = 65 , B = 66
     */

#include<stdio.h>

void main()  {
	//we have ASCII range from 0 to 128 so use for loop to traverse from 0 - 128
	for(int i=0;i<=128;i++) {

		printf("%d = %c\n",i,i);
	}


}
