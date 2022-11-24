/*-------------------------------------------------------------------------------------------------------------------------------------
Program 10: Write a program in C to read the file and store the lines into an array.
---------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp = fopen("Demo.txt","r");	//open a file in read mode
	char arr[100];	
	int i=0;

	if(fp == NULL){
		printf("Failed to open!!!!\n");
		exit(1);
	}
	else{
		//copy the content into array
		while( (arr[i]=fgetc(fp) ) != EOF)
			i++;
		
		//print the array
		for(int lc=0; lc<i ;lc++ )
			printf("%c",arr[lc]);
	}
}
		
		

