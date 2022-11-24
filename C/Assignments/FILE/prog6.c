/*
---------------------------------------------------------------------------------------------------------------------------------------
5. Write a program in C to copy the contents of file1 into file2 (write a cp call of your own)
--------------------------------------------------------------------------------------------------------------------------------------
*/


#include <stdio.h>
#include <stdlib.h>

void copyFiles(FILE *f1 , FILE *f2){
	
	char ch;
	while( (ch=fgetc(f1) ) !=EOF){
		
		fputc(ch,f2);
	}

}

void main() {

	FILE *fp1 ,*fp2;
	
	//open to files one  for read and second for write 
	fp1 = fopen("prog6_file1.txt","r");
	fp2 = fopen("prog6_file2.txt","w");
	
	if(fp1==NULL || fp2 == NULL){
		printf("Failed to the open\n");
		exit(1);
	}
	else{
		copyFiles(fp1,fp2);	
	}
	
}
