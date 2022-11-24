//convert string to the Upper case

#include <stdio.h>
char *mystrUpper(char*);

void main(){
	
	char str[20];
	printf("Enter string: ");
	gets(str);
	
	mystrUpper(str);
	printf("Upper case of string: %s\n\n",str);
}

char *mystrUpper(char* str){
		
		while( *str != '\0'){
			
				if( *str >='a' && *str <='z')
					*str = *str - 32;
			str++;
		}
	return str;
}
