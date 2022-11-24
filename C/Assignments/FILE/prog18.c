/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 18: Write a program in C to print the first word of every line.
--------------------------------------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void main(){
	
	FILE *fp=fopen("kajal.txt","r");
	char ch,i=0;

	if(fp==NULL){
		printf("unable to open a file\n");
		exit(1);
	}
	
	else{
		printf("starting letters of each lines are\n");
		while( (ch=fgetc(fp)) != EOF){
			if(i==0){
				printf("%c\n",ch);
				i=1;
			}
			if(ch =='\n')
				i=0;
		
		}
	}
}
