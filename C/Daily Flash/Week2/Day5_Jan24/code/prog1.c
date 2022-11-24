/*
Program 1: Write a Program to print all the numbers ranging between 1 to 100
that are divisible by 3 or 5.
Output: 3 5 6 9 10 . . .. 99 100.
*/

#include <stdio.h>

void main () {
	for(int i=1; i<=100 ;i++)
		if(i%3 ==0 || i%5 == 0)
			printf("%d  ",i);
	printf("\n");
}


