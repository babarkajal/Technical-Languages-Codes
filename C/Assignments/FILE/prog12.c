/*
---------------------------------------------------------------------------------------------------------------------------------------
Program 12:Write a program in C to print the contents of the file and print the number of words and
characters does that file contains .
---------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp=fopen("Demo.txt","r"); 	//open a file for reading
	int countChar=0,countWord=0;
	char ch;

	if(fp==NULL){
		printf("File is not present\n");
		exit(1);
	}
	else{
		while( (ch=fgetc(fp)) != EOF){ //eof
			
			if(ch!=' ' && ch !='\n')
				countChar++;
			if(ch==' ' || ch==',' || ch=='.')
				countWord++;	
		
		}
	}
	printf("Number of characters = %d\n",countChar);
	printf("Number of words = %d\n",countWord);
}
			
