/*-------------------------------------------------------------------------------------------------------------------------------------
Program 20: Write a program in C to print the last ten characters of the file using the library functions
------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *fp;
	int count=10;
	char ch;
	
	//open a file in read mode
	fp=fopen("kajal.txt","r");
	if(fp==NULL){
		printf("Unable to open file\n");
		exit(1);
	}
	else{
		fseek(fp,-2,2);						//start from end and set to the 
		while( (ch=fgetc(fp)) != EOF && count > 0){	
				
				fseek(fp,-2,1);				//move backword
		
				if( (ch>='A' && ch<='Z') || ( ch >= 'a' && ch <= 'z' )){
					printf("%c ",ch);
					count--;
				}
		}
		printf("\n");
	}
}
