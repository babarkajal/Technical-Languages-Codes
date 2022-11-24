//apppend mode of file

#include <stdio.h>
#include <stdlib.h>

void main(){
		
	FILE *fp1,*fp2;
	char ch;
	char str[20];
	//open a file for read
	fp1=fopen("Demo.txt","r");
	
	//open a new file for appending
	fp2=fopen("appendDemo.txt","a");
	
	
	if(fp1==NULL && fp2==NULL){
		
		printf("File not found\n");
		exit(1);

	}
	//write the data 
	else{
		while( (ch = fgetc(fp1))!=EOF)
			fputc(ch,fp2);

	}
	fputc('k',fp2);
}
	
