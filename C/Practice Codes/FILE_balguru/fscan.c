//fprint() ;-write into a file

#include <stdio.h>

void main(){
	FILE *fp;
	char ch;

	char firstName[20],lastName[20];
	fp=fopen("print.txt","r");
	
	
	if(fp==NULL)
		printf("unable to open\n");
	else{
			
					
			while( fscanf(fp,"%s",firstName) > 0) //used to get the values from the file
				printf("First name %s\n",firstName);
	}
}
