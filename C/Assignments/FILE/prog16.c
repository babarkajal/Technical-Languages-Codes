/*------------------------------------------------------------------------------------------------------------------------------------
Program 16: Write a program in C to merge the contents of two files and write it as a whole in 3rdfile
------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *fp1=fopen("f1.txt","r");
	FILE *fp2=fopen("f2.txt","r");
	FILE *fp3=fopen("f3.txt","a");
	char ch;
		
	if(fp1==NULL || fp2==NULL || fp3==NULL){
		printf("Uanble to open/creat file\n");
		exit(1);
	}
	else{
		while( (ch=fgetc(fp1)) !=EOF)
			fputc(ch,fp3);
	
		while( (ch=fgetc(fp2)) !=EOF)
			fputc(ch,fp3);
	}
	printf("File merged successfully\n");
}
