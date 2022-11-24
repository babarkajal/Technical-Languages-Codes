/*
---------------------------------------------------------------------------------------------------------------------------------------
Program 22: Write a program in C to find the count of number of consonants in the file .
---------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void main(){
	int count=0;
	char ch;
	FILE *fp=fopen("Demo.txt","r");
	if(fp==NULL){
		printf("unable to open a file\n");
	}
	else{
		while((ch=fgetc(fp)) !=EOF){
				//check for alphabets

			if ( (ch >='A' && ch <='Z') || (ch >='a' && ch <= 'z')){
					
				//check for consonants
				if( ch !='a'&& ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&& ch!='E'&&ch!='I'&&ch!='O'&&ch!='U' ){
						count++;
				}	
			}
		}
	}
	printf("Count of consonants: %d\n",count);
}	
