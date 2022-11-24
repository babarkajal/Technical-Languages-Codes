//open a file write and read the data 

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp;
	
	char ch;
	char arr[10];
	fp=fopen("wPlusMode.txt","w+");	//open for read and write
	if(fp == NULL){
		printf("unable to create file\n");
		exit(1);
	}
	else
		fgets(fp,10,stdin);
	
	//write a charcter in the file
	//ch='K';
	//putc(ch,fp);	
	char brr[10];
	fscanf(fp,"%s",&brr);
	printf("%s",brr);
	/*while( (ch=fgetc(fp)) != EOF){
			printf("%c",ch);
	}*/
}
	
