//open a file and read the data from the file and print

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp;
	
	fp=fopen("demo.txt","r");	//in r mode if file is not present then return null
	if(fp == NULL){
		printf("Unable to create file\n");
		exit(1);
	}
	
	
	//read the data using fgetc
	char ch;
	while( (ch=fgetc(fp)) != EOF)
		printf("%c",ch);
	

	
}
	
