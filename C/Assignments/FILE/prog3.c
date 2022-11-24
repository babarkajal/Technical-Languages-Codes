/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 3:Write a program in C to write your name in the file1 and use another file file2 and read the contents of file2 and display on the screen(terminal).
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	FILE *fp1=fopen("Demo.txt","r");		//open in read mode
	FILE *fp2=fopen("Prog3.txt","w+");		//open in write mode
	char ch;
	
	if(fp1==NULL ||fp2==NULL){
			printf("Failed to open!!!!\n");
			exit(1);
	}
	else{
							
		while( (ch=fgetc(fp1)) != EOF){		//copy the contents 
			fputc(ch,fp2);
		}
	
		fseek(fp2,0,0);				//set the current pointer to starting
		while( (ch=fgetc(fp2)) != EOF){
			fputc(ch,stdout);		//print to the terminal
		}
	}
}	
