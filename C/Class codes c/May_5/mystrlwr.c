//convert string to the lower case

#include <stdio.h>
char *mystrlwr(char*);

void main(){
	
	char str[20];
	printf("Enter string: ");
	gets(str);
	
	mystrlwr(str);
	printf("Lower case of string: %s\n\n",str);
}

char *mystrlwr(char* str){
		
		while( *str != '\0'){
			
				if( *str >='A' && *str <='Z')
					*str = *str+32;
			str++;
		}
	return str;
}
