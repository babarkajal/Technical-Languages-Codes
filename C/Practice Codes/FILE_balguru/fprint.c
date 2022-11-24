//fprint() ;-write into a file

#include <stdio.h>

void main(){
	FILE *fp;
	char firstName[20]="KAJAL",lastName[20]="BABAR";
	fp=fopen("print.txt","w");
	if(fp==NULL)
		printf("unable to open\n");
	else{
		fprintf(fp,"%s\n%s",firstName,lastName);
	}
	//printf("%d",fp->_mode);
}
