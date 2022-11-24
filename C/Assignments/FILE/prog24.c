

//program 23: WAP to print the  file contents after every 2 bytes
//*************************************************************************************************************************************

#include <stdio.h>
#include <stdlib.h>

void main(){
	//open a file in read mode
	FILE *fp=fopen("Demo.txt","r");
	char ch;

	if(fp==NULL){	
		printf("Unable to open a file\n");
		exit(1);
	}
	else{
		
	  	while( (ch =fgetc(fp) )!= EOF){
		
				printf("%d ",ftell(fp));
				printf("%c\n",ch);
				fseek(fp,2,1);	//move forward by 2 from current position
			}
		}
	
}
	
