/*
------------------------------------------------------------------------------------------------------------------------------------
Program 14: Write a program in C to append some text at the end of the file. If the file already contains some data then the contents should be appended at the end .
------------------------------------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void main(){
	
	char *str="Hello world";
	FILE *fp=fopen("append.txt","a");
	if(fp==NULL){
		printf("Unable to open\n");
		exit(1);
	}
	else{
		fputs(str,fp);
	}
}
