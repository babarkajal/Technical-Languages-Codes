//ftell() :- used to get postition of current pointer
//for append mode

//long int ftell(FILE*);
#include <stdio.h>

void main(){
	FILE *fp=fopen("appendDemo.txt","a");
	if(fp==NULL)
		printf("Unable to read\n");
	
	int i=ftell(fp);//getting the current position in append mode
	printf("position=%d\n",i);	

}
