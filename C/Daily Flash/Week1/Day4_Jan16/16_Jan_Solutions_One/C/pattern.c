/*
Program 4: Write a Program to Print following Pattern
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16
*/


#include<stdio.h>
#define UPPERLIMIT 4
#define LOWERLIMIT 1

void main(){
	
	int display = 0;
	for(int outerItr = LOWERLIMIT ; outerItr <= UPPERLIMIT ; outerItr++){
		
		for(int innerItr = LOWERLIMIT ; innerItr <= UPPERLIMIT ; innerItr++){
			
			printf("%d\t",++display);

		}	
		printf("\n");
	}	


}	
