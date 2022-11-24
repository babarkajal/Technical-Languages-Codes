//open a file and read and write the data

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp;
	
	char ch;
	fp=fopen("rPlusMode.txt","r+");	//open for read and write
	printf("%p\n",fp);
	if(fp == NULL){
		printf("unable to create file\n");
		exit(1);
	}
	else{
		while( (ch=fgetc(fp)) != EOF)
			printf("%c",ch);
	}
	
	printf("%p\n",fp);
	//write a charcter in the file
	ch='K';
	putc(ch,fp);	

	printf("%p\n",fp);
	while( (ch=fgetc(fp)) != EOF){
			printf("%c",ch);
	}
}
	
