
#include<stdio.h>

int mystrlen(const char*);
char* gets(const char*);

void main(){
	
	char *str;
	int len;
	printf("Enter string: ");
	gets(str);
	
	len=mystrlen(str);
	printf("Length of string %s =%d\n\n",str,len);

}

int mystrlen(const  char* str){

	int count=0;
	while( *str != '\0'){
		count++;
		str++;
	}
	
	return count;
	
}
