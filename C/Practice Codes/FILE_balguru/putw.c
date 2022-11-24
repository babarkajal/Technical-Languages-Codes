//putw() :- write into file

#include <stdio.h>
#include <stdlib.h>
void main(){
	FILE *fp1;
	int c=1234;
	fp1=fopen("putw.txt","w");
	
	if(fp1==NULL){
		printf("Uable to open a file\n");
		exit(1);
	}
	else{
		
		putw(c,fp1);
	}
}
