//fclose function
#include<stdio.h>

void main(){
	FILE *f;
	fopen("kajal.txt","r");
	if(f==NULL)
		printf("error while opening the file\n");
	printf("%p\n",f);
//	fclose(f);
	printf("%p\n",f);
}
