/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 9:  Write a program in C to copy the contents of one file into the another file but a reverse manner. IF the file1 contains
            "hello world” file2 should contain “dlrow olleh”
--------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include<stdlib.h>

void main(){
	int count=0;	
	char ch;
	FILE *fp1 =fopen("file1.txt","r");
	FILE *fp2 =fopen("file2.txt","w");
	if(fp1==NULL || fp2==NULL){
		printf("File not found!!!\n");
		exit(1);
	}

	//calculate the count of letters
	else{
		while((ch=fgetc(fp1))!=EOF)
			count++;
	}

	int reverse=-2; //set the varible at the last character from end 
	
	while(reverse >= -count){
		fseek(fp1,reverse,2); //fseek(pointer ,offset,position) ,2 for end 
		fputc(fgetc(fp1),fp2); 	//write the character into file2
		reverse--; 		//dec index bcoz we want to move backword
	}
	printf("\n");
	
} 	
	
