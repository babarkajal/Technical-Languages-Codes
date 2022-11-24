/*
---------------------------------------------------------------------------------------------------------------------------------------
Program 10 : Write a program in C to read the file and store the lines into an array.
---------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>


void main(){
	
	FILE *fp=fopen("Read.txt","r"); 	//open a file for reading
	int count=0;
	char ch;
	if(fp==NULL){
		printf("File is not present\n");
		exit(1);
	}
	else{
		while( (ch=fgetc(fp)) != EOF){ //eof
			
			if(ch=='\n')
				count++;
		
		}
	}
	printf("Number of lines = %d\n",count);
}
			
