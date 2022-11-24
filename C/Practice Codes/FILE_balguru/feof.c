//feof function

#include <stdio.h>

void main(){	
	FILE *fp;
	fp=fopen("Demo.txt","r");
	char ch;
	int count=0;
	while(!feof(fp)){	//upto end of file returns the non zero value
		ch=fgetc(fp);
		printf("%c",ch);
		count++;
	}
	printf("Count=%d\n",count);
}
