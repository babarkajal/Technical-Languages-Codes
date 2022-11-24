//fputc()

#include <stdio.h>

void main(){
	
	FILE *fp=fopen("kajal.txt","w");
	char *str;
	int i=0;
	if(fp==NULL)
		printf("Unable to open/create a file\n");
	else{
		printf("Enter the string\n");
		fgets(str,10,stdin);
		while(*str !=0){
			fputc(*str,fp);
			str++;
		}
	}
	fclose(fp);
		
}
