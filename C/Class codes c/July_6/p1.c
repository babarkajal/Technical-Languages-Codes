//open a new file in a write mode 

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	FILE *fp;
	
	fp=fopen("kajal.txt","w");	//in w mode create an empty file if existing then trunacate to zero
	if(fp == NULL){
		printf("Uable to create file\n");
		exit(1);
	}
	
}
	
