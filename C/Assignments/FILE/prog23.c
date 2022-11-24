//count the number of capital and small letters

#include <stdio.h>
#include <stdlib.h>

void main(){
	int countTab=0,countNewLine=0;
	char ch;

	FILE *fp=fopen("indentation.txt","r");
	if(fp==NULL){
		printf("unable to open a file\n");
	}
	else{
		while((ch=fgetc(fp)) !=EOF){
			//count tabs 
			if ( ch =='\t')
					countTab++;
			//count new line characters		
			if (ch == '\n')
				countNewLine++;
		}
	}
	printf("Count of Tabs: %d\n",countTab);
	printf("Count of newLine characters: %d\n",countNewLine);
}	
