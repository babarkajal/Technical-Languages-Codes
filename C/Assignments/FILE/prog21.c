
/*------------------------------------------------------------------------------------------------------------------------------------
Program 21: Write a program in C to count the number of occurrences of capital and small letters in a file .
----------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	int countCap=0,countSmall=0;
	char ch;
	FILE *fp=fopen("Demo.txt","r");
	if(fp==NULL){
		printf("unable to open a file\n");
	}
	else{
		while((ch=fgetc(fp)) !=EOF){
			//count capital letters
			if ( ch >='A' && ch <='Z' )
					countCap++;
			//count small letters		
			if (ch >='a' && ch <= 'z')
				countSmall++;
		}
	}
	printf("Count of Capital letters: %d\n",countCap);
	printf("Count of Small letters: %d\n",countSmall);
}	
