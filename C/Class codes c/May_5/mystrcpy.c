//copy operation

#include<stdio.h>

//prototypes
char* gets(const char*);
char* mystrcpy(char* ,const char* );


void  main(){

	char str1[20];
	char str2[20];

	printf("Enter source string: ");
	gets(str1);

	//copy
	mystrcpy(str2,str1);
	
	printf("Copied string: %s\n\n",str2);
}


char* mystrcpy(char* dest, const char* src){
	


	while( *src !='\0'){
		
	
		*dest=*src;
		
		src++;	
		dest++;
	
	}
	*dest='\0';
	return dest;
}
