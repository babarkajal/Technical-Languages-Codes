/*
 * Program 5 : Write a Program to print following Pattern.
Output :
0
0 0
0 0 0 
0 0 0 0
*
*/

#include <stdio.h>


void main() {
	int i,row;
	printf("Enter row: ");
	scanf("%d",&row);
	
	int count = 1, var =0;
	for(int i=0; i < count; i++) {
		printf(" 0 ");		
		if(i == var){
			printf("\n");
			i = 0;
			var++;
		}
		count++;
		if(count == row)
			break;
	}	


}

