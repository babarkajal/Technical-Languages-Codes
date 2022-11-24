/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 7: Write a program in C to print the contents of the file but in a reverse order .
--------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include<stdlib.h>

void main(){
	int count=0;	
	char ch;
	FILE *fp =fopen("Reverse.txt","r");
	if(fp==NULL){
		printf("File not found!!!\n");
		exit(1);
	}
	//calculate the count of letters
	else{
		while((ch=fgetc(fp))!=EOF)
			count++;
	}

	int reverse=-2; //set the varible at the last character from end 
	
	while(reverse >= -count){
		fseek(fp,reverse,2); //fseek(pointer ,offset,position) ,2 for end 
		putchar(fgetc(fp)); 	//print the character
		reverse--; 		//dec index bcoz we want to move backword
	}
	printf("\n");
	
} 	
	
