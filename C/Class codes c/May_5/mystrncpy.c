//copy operation of n characters

#include<stdio.h>

//prototypes
char* gets(const char*);
char* mystrncpy(char* ,const char* ,int);


void  main(){

	char str1[20];
	char str2[20];
	int n;

	printf("Enter source string: ");
	gets(str1);
	
	printf("Enter number of characters to be copied: ");
	scanf("%d",&n);
	
	//copy of n characters
	char *temp=mystrncpy(str2,str1,n);
	
	if(temp==str1)
		printf("n is greater than the length of source string\n\n");
	else
		printf("Copied string: %s\n\n",str2);
}

int mystrlen(const char* str){
		
		int count;
		for(count=0; *str!='\0' ;str++,count++);
	return count;
}

char* mystrncpy(char* dest, const char* src,int n){
	
	int len=mystrlen(src);
	if(n > len)
		return src;
	
	while(n > 0){
		
		*dest=*src;
		src++;	
		dest++;
		n--;
	}

	*dest='\0';
	return dest;
}
