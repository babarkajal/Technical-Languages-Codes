//fopen() function
//prototype
//FILE *fopen(const char*, const char*);

#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *fp;
	fp=fopen("/home/kajal/Desktop/kajal.txt","r");
	
	if(fp==NULL){
		printf("Unable to open\n");
		exit(1);
	}
	printf("fp=%p\n",fp);
}
