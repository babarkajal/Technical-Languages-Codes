//ftell() :- used to get postition of current pointer


//long int ftell(FILE*);
#include <stdio.h>

void main(){
	FILE *fp=fopen("Demo.txt","r");
	if(fp==NULL)
		printf("Unable to read\n");
	int i=ftell(fp);//getting the current position in read mode
	printf("position=%d\n",i);	

}
