/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 2: Write a program in C to create a file which will have “ HELLO WORLD ” string written into it .
--------------------------------------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>

void main(){
	
	FILE *fp;
	char* arr="Hello world";
	fp=fopen("Hello.txt","w");//open in write 
	if(fp==NULL){
		printf("Unable to print\n");
	}	
	else{
		while(*arr != '\0'){
			
			fputc(*arr,fp);
			arr++;
		}
	}
}
