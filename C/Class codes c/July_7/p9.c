//fgetpos() :- used to get postition of current pointer


//long int ftell(FILE*);
#include <stdio.h>

void main(){
	FILE *fp=fopen("Demo.txt","r");
	int loc;

	if(fp==NULL)
		printf("Unable to read\n");
	
	else{
		fgetpos(fp,&loc);//getting the current position in read mode
		printf("position=%d\n",loc);	
	}

}
