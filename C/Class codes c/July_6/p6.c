//open a file in append mode

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp;
	
	fp=fopen("kajal.txt","a");	//in append mode if file is present then writing starting from the end of file
	if(fp == NULL){
		printf("Unable to create file\n");
		exit(1);
	}
	
	
	//write the data using fputc
	putc('k',fp);	
	putc('a',fp);	
	putc('j',fp);	
	putc('a',fp);	
	putc('l',fp);	

	
}
	
