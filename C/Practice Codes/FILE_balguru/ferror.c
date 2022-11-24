//ferror
#include<stdio.h>
void main(){
	FILE *fp=fopen("Error.txt","r");
	//if(ferror(fp) != 0)
		printf("Error!!!");
}
