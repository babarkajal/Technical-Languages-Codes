/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 5: Write a program in C to display the size of the file.

Note:- size of file is same as the number of characters are present in the file
--------------------------------------------------------------------------------------------------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
		FILE *fp;
		char ch;
		int count=0;

		fp=fopen("kajal.txt","r");		//open a file in read mode

		if(fp==NULL){
			printf("failed to open a file!!!!!\n");
			exit(1);
		}
		else{
			while( (ch=fgetc(fp)) !=EOF)
				count++;		//count the charcters
		}
			
			printf("The size of the file is %d bytes\n\n",count);
}
