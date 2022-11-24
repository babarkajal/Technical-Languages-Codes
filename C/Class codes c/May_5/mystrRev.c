

//String reverse operation

#include<stdio.h>
#include<string.h>
char* mystrRev( char*);
char* gets(const char*);


void main(){
	
	char str[20];
	int len;
	printf("Enter string: ");
	gets(str);
	
	mystrRev(str);
	printf("Reversed String: %s\n\n",str);

}

char* mystrRev( char* str){

	int len=strlen(str);
	char ch;
	
	//pointing to the first location
	char *temp=str;
	
	//pointing to the last loc
	str= str + len;
	str--;
	
	while( temp < str) {	
		
		ch=*temp;
		*temp=*str;
		*str=ch;
		temp++;
		str--;
	}

	return str;
	
	
}
