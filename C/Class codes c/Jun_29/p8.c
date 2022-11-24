//fopen() function
//prototype
//FILE *fopen(const char*, const char*);

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *fp;
	char ch;
	fp=fopen("/home/kajal/Desktop/kajal.txt","r");
	//print after creation
	printf("fp= %p\n",fp);
	
	if(fp==NULL){
		printf("Unable to open\n");
		exit(1);
	}
	else{
		while( (ch=fgetc(fp)) !=EOF){
			printf("%c",ch);
		}
	}
	//close
	int i=fclose(fp);
	printf("Status of fclose= %d\n",i);

	//print after close
	printf("fp= %p\n",fp);
}
