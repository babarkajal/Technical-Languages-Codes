//fseek

#include <stdio.h>

void main(){
	FILE *fp=fopen("seek.txt","r");
	fseek(fp,-2L,2);
	putchar(fgetc(fp));
	fseek(fp,2,0);
	putchar(fgetc(fp));
	fseek(fp,0L,1);
	putchar(fgetc(fp));
}
	
