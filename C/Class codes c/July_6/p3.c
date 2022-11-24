//open a new file in a read mode 

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp;
	
	fp=fopen("demo.txt","r");	//in r mode if file is not present then return null
	if(fp == NULL){
		printf("Uable to create file\n");
		exit(1);
	}
	
}
	
