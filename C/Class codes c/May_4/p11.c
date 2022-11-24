//calculate length of string 

#include<stdio.h>
#include<string.h>

void main(){
	char str[20];
	puts("Enter string: ");
	fgets(str,10,stdin);
	printf("length of string %s = %d\n\n",str,strlen(str));
}
