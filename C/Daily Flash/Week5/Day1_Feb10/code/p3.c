/*
 * Program 3: Write a Program to take inputs from user and print them using
while loop until user enters a negative number.
*
*/

#include <stdio.h>

void main() {
	int num[100], len=0;
	
	printf("Enter integers: ");
	scanf("%d",&num[0]);

	while(1) {
		
		//if user enters the negative num then go to the print loop
		if(num[len] < 0) 		
			break;	
		len++;
		scanf("%d",&num[len]);
		
	}
	printf("Input integers\n");
	//print loop
	int i=0;
	while( i < len) {
		printf("%d\t", num[i]);
		i++;
	}
	printf("\n");
}
